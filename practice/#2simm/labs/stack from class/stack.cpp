//
// Created by Cake on 21.04.2022.
//
#include <iostream>

using namespace std;

class Stack1{
protected:
    struct stack{
        int data;
        stack* next;
    };
    stack* tip;
public:
    Stack1(){tip = nullptr;}
    Stack1(int n, ...) {
        for (int *ptr = &n; n > 0; n--) {

            if (tip != nullptr) {
                stack *node = new stack;
                ++ptr;
                node->data = *(++ptr);
                node->next = tip;
                tip = node;
            } else {
                stack *node = new stack;
                ++ptr;
                node->data = *(++ptr);
                node->next = nullptr;
                tip = node;
            }
        }
    }
    void push(int n){
        stack* node = new stack;
        if (tip != nullptr){
            node->data = n;
            node->next = tip;
            tip = node;
        }
        else{
            node->data = n;
            node->next = nullptr;
            tip = node;
        }
    }
    void del(){
        if (tip == nullptr) return;
        stack* temp = tip;
        tip = tip->next;
        delete temp;
    }
    friend ostream& operator<<(ostream& stream, Stack1& p){
        stack* current = p.tip;
        while(current != nullptr){
            cout<<current->data<<" ";
            current = current->next;
        }
        return stream;
    }
};

int main(){
    Stack1 a(4, 1, 1, 4, 7);
    a.push(4);
    a.del();
    cout<<a;

}