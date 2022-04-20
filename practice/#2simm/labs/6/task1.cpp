//
// Created by Cake on 13.04.2022.
//
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

struct List;
class Iterator;

class Container{
protected:
    struct List{
        int data;
        List *pointer = nullptr;
    };

    List* beg = nullptr;
    List* end = nullptr;

public:
    Container(){
        beg = nullptr;
        end = nullptr;
    }
    Container(int n, ...) {
        for (int *ptr = &n; n > 0; n--) {
            List *node = new List;
            ++ptr;
            node->data = *(++ptr);
            if (beg != nullptr) {
                if (end != nullptr) {
                    end->pointer = node;
                    node->pointer = nullptr;
                    end = node;
                } else {
                    beg->pointer = node;
                    node->pointer = nullptr;
                    end = node;
                }
            } else {
                node->pointer = nullptr;
                beg = node;
            }

        }
    }
    ~Container(){
        List* current = beg;
        List* temp;
        while(current != nullptr){
            temp = current->pointer;
            delete [] current;
            current = temp;
        }
        cout<<endl<<"Destructor";
    }



    friend ostream& operator<<(ostream& stream, Container& p){
        List* current = p.first();
        while(current != nullptr){
            cout<<current->data<<" ";
            current = current->pointer;
        }
        return stream;
    }


    void push(int data){
        List *node = new List;
        node->data = data;
        if (beg != nullptr) {
            if (end != nullptr) {
                end->pointer = node;
                node->pointer = nullptr;
                end = node;
            } else {
                beg->pointer = node;
                node->pointer = nullptr;
                end = node;
            }
        } else {
            node->pointer = nullptr;
            beg = node;
        }
    }

    int operator()(){
        int count = 0;
        List* current = beg;
        while(current != nullptr){
            ++count;
            current = current->pointer;
        }
    return count;}

    List* first(){return beg;}

    int operator[](int index){
        List* temp = beg;
        for (int i= 0; i<index && temp!= nullptr; i++) {
            temp = temp->pointer;
        }
        return temp->data;
    }

};

class Iterator: public Container{
    friend class Container;
public:
    List *elem;
    Iterator(){elem= nullptr;}

    Iterator(List* p){
        elem = p;
    }
    int operator *(){
        return elem->data;
    }
    void operator+(int n){
        List* temp = elem->pointer;
        for (int i= 0; i<n && temp!= nullptr; i++) {
            temp = temp->pointer;
        }
    }

};

int main(){
    srand(time(0));

    Container a(5, 1, 2, 3, 5, 4);
    cout<<a;
    a.push(78);
    cout<<endl<<a;
    cout<<endl<<a();
    Iterator iter(a.first());
    cout<<endl<<a[3];
    cout<<endl<<*iter;
    cout<<endl<<*iter+2;

}