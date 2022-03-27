//
// Created by Cake on 02.03.2022.
//
#include <iostream>
#include <windows.h>

using namespace std;

struct simply_connected{
    int data;
    simply_connected *next;
};
simply_connected *start;
const int n = 10;

void addsimple(int x){
    simply_connected *temp = new simply_connected;
    temp->data = x;
    temp->next= nullptr;
    if (start == nullptr){
        start = temp;
    }
    else{
        simply_connected *current = start;
        while(current->next!= nullptr){
            current = current->next;
        }
        current->next = temp;
    }

}

void show(){
    simply_connected *current = start;

    while (current->next != nullptr){
        cout<<current->data<<" ";
        current = current->next;
    }
    cout<<current->data<<" ";
}
void deletesimple(){
    simply_connected *current = start;
    int pos = 0;
    int i = 1;
    while (current->next != nullptr){
        if ((current->data)%2==0){
            pos = i;
        }
        ++i;
        current = current->next;
    }
    if ((current->data)%2==0){
        pos = i;
    }
    current = start;
    i = 1;
    if (pos>=1){
        simply_connected *temp = start;
        if ((pos==1)||(pos==n)){
            if (pos==1){
                start = start->next;
                delete temp;
            }
            else{
                while (current->next != nullptr){
                    temp = current;
                    current = current->next;
                }
                temp->next= nullptr;
            }

        }
        else{
            while (i<pos){
                temp = current;
                current = current->next;
                ++i;
            }
            current = current->next;
            temp->next = current;

        }

    }
    else{
        cout<<"Чётное число отсутствует";
    }

}
int main(){
    SetConsoleOutputCP(CP_UTF8);

    int a[n] = {11, 23, 3, 5, 55, 32, 55, 11, 22, 25};
    for(int i=0; i<n; ++i){
        addsimple(a[i]);
    }
    show();
    deletesimple();
    cout<<'\n';
    show();
return 0;}
