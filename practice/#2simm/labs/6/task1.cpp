//
// Created by Cake on 13.04.2022.
//
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

struct List{
    int data;
    List *pointer = nullptr;
};

class Iterator{
    friend class Container;//дружественный класс
    List *elem;
public:
    Iterator(){elem= nullptr;}

    void operator+(int n){
        for (int i= 0; i<n && elem->pointer!= nullptr; i++) {
            elem = elem->pointer;
        }
    }
};


class Container // Определяем класс-контейнер
{
protected:

    List* beg= nullptr;//указатель на первый элемент
    List* end = nullptr;
public:

    Container(int n, ...) {
        for (int *ptr = &n; n > 0; n--) {
            List *node = new List;
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

};

int main(){
    srand(time(0));

    Container a(5, 1, 2, 3, 5, 4);

    //Iterator iter ;
    //for(iter=a.first();iter!=a.last();++iter){
      //  cout<<*iter<<" ";
    //}
}