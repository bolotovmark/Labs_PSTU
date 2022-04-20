//
// Created by Cake on 20.04.2022.
//
#include <iostream>
#include <windows.h>

using namespace std;

struct List;
class Pair;

template <class T>

class Container{
protected:
    struct List{
        T data;
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
        for (T *ptr = &n; n > 0; n--) {
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


    void push(T data){
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

class Pair {
private:
    int first;
    double second;
public:
    Pair() {
        this->first = 0;
        this->second = 0;
    }
    Pair(int first, double second) {
        this->first = first;
        this->second = second;
    }
    void set(double first, double second) {
        this->first = first;
        this->second = second;
    }
    void show() {
        cout << "Введено ==> first: " << first;
        cout << " second: " << second << endl;
    }
    friend ostream& operator<<(ostream&, const Pair&);
    Pair operator-(const Pair &P) {
        cout << "Вычитание " << *this << " и " << P << endl;
        this->first = this->first - P.first;
        this->second = this->second - P.second;
        cout <<  "Получилось" << *this << endl;
        return *this ;
    }

    Pair operator+(const int& dig) {
        cout << "Сложение " << *this << " и " << dig << endl;
        this->first = this->first + dig;
        cout << "Получилось" << *this << endl;
        return *this;
    }

    Pair operator+(const double& dig) {
        cout << "Сложение " << *this << " и " << dig << endl;
        this->second = this->second - dig;
        cout << "Получилось" << *this << endl;
        return *this;
    }
};

ostream& operator<<(ostream& os, const Pair& d) {
    return os <<"( " << d.first << " : " << d.second<<" )";
}

int main() {

    Container<int>a(5, 1, 2, 3, 5, 4);
    Pair b(2, 3.4);
    Pair c(3, 10.5);
    Container<Pair> list_pair;
    list_pair.push(b);
    list_pair.push(c);
    cout << a;
    cout<<endl<<list_pair;


}