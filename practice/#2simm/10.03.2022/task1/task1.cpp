//
// Created by Cake on 09.03.2022.
//
#include <iostream>
#include <windows.h>

using namespace std;

struct stack{
    int data;
    stack* next;
};
stack* tip = nullptr;

void push(int &n){
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

void reverse(){
    stack* current = tip;
    stack* temp;
    stack* temp1;
    while(current->next != nullptr){
        if(current!=tip){
            temp1 = current->next;
            current->next = temp;
            temp = current;
            current = temp1;


        }
        else{
            temp1 = current->next;
            temp = current;
            temp->next = nullptr;
            current = temp1;
        }
    }
    tip = current;
    tip->next = temp;
}

void show(){
    stack* current = tip;
    while(current != nullptr){
        cout<<current->data<<" ";
        current = current->next;
    }
}

void del(){
    stack* current = tip;
    stack* temp;
    bool flag = false;

    while (!flag&&(current!=nullptr)){
        if((current->data)%2 == 0){
            if (current==tip){
                tip = current->next;
                delete current;
                flag = true;
            }
            else{
                temp->next = current->next;
                delete current;
                flag = true;
            }
        }
        temp = current;
        current = current->next;
    }

}
int main(){
    int n, k;
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите кол-во элементов стека: ";
    cin>>n;

    for(int i=0; i<n;++i){
        cin>>k;
        push(k);
    }
    cout<<endl;
    show();
    reverse();
    del();
    reverse();
    cout<<endl;
    show();


return 0;}
