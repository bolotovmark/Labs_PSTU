//
// Created by Cake on 21.03.2022.
//
#include <iostream>
#include <windows.h>
#include <string>


using namespace std;

struct queue{
    string data;
    queue* next;
};
queue* start = nullptr;
queue* tail = nullptr;

void push(string data){
    queue* node = new queue;
    node->data = data;
    if (start!=nullptr){
        if(tail!=nullptr){
            tail->next=node;
            node->next = nullptr;
            tail = node;
        }
        else{
            start->next = node;
            node->next = nullptr;
            tail = node;
        }
    }
    else{
        node->next = nullptr;
        start = node;
    }
}

void show(){
    queue* current = start;
    while(current != nullptr){
        cout<<current->data<<" ";
        current = current->next;
    }
}

void insert(int n, int p){
    if(p<=n+1){
        if(p!=n+1){
            int i=1;
            queue* current;
            while(p!=i){
                current = start;
                tail->next = current;
                start = current->next;
                current->next = nullptr;
                tail = current;
                ++i;
            }
            push("!!!NEW!!!");
            while((n+1)!=i){
                current = start;
                tail->next = current;
                start = current->next;
                current->next = nullptr;
                tail = current;
                ++i;
            }

        }
        else{
            push("!!!NEW!!!");
        }
    }
    else{
        cout<<"Error! Этот номер не существует в очереди.";
    }
}
int main(){
    int n, p;
    string k;
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите кол-во элементов очереди: ";
    cin>>n;
    getline(cin, k);
    for(int i=0; i<n;++i){
        getline(cin, k);
        push(k);
    }
    cout<<endl;
    show();
    cout<<endl<<"Введите позицию нового элемента:";
    cin>>p;
    insert(n, p);
    cout<<endl;
    show();
    cout<<endl;

}
