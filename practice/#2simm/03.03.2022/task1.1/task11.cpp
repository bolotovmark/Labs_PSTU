//
// Created by Cake on 02.03.2022.
//
#include <iostream>
#include <windows.h>

using namespace std;

struct bidirectional{
    char* data;
    bidirectional *next;
    bidirectional *back;
};

bidirectional *start;
const int n = 10;

void addbidirect(char* x){
    bidirectional *temp = new bidirectional;
    temp->data = x;
    temp->next= nullptr;
    temp->back= nullptr;
    if (start == nullptr){
        start = temp;
    }
    else{
        bidirectional *current = start;
        while(current->next!= nullptr){
            current = current->next;
        }
        current->next = temp;
        temp->back = current;

    }
}
void show(){
    bidirectional *current = start;

    while (current->next != nullptr){
        cout<<current->data<<" ";
        current = current->next;
    }
    cout<<current->data<<" ";
}
void add_bidir(int p){
    char *a = "**new**";
    bidirectional *current = start;
    bidirectional *temp = new bidirectional;
    temp->data = a;
    temp->next= nullptr;
    temp->back= nullptr;
    int i = 1;
    while (i<p){
        current = current->next;
        ++i;
    }
    temp->next = current->next;
    (current->next)->back = temp;
    temp->back = current;
    current->next = temp;
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    int p;
    char a[n][25] = {"A", "robin", "sits", "on", "my", "window-sill", "I", "Putout", "bread", "for"};
    for(int i=0; i<n; ++i){
        addbidirect(a[i]);
    }
    show();
    cout<<endl<<"Введите номер позиции, куда добавить элемент: ";
    cin>>p;
    add_bidir(p);
    show();

    return 0;}