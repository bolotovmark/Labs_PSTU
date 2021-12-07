//
// Created by Cake on 07.12.2021.
//
#include <iostream>
#include <clocale>

using namespace std;

int main(void){
    setlocale(LC_ALL, "Russian");
    int i=1, n, a;
    bool f=false;

    cout<<"Введите кол-во элементов последовательности: ";
    cin>>n;
    while ((i<=n) and !(f)){
        cout<<endl<<"Введите элемент последовательности: ";
        cin>>a;
        if (a == 0){
            ++i;
        }
        else {
            f = true;
        }
    }

    if (f == true) {
        if (a>0){
            cout<<"Первое в последовательности встречается положительное число";
        }
        else {
            cout<<"Первое в последовательности встречается отрицательное число";
        }
    }
    else{
        cout<<"Все элементы равны 0";
    }
    return 0;}
