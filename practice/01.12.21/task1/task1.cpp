//
// Created by Cake on 01.12.2021.
//
#include <iostream>
#include <clocale>

using namespace std;

int main(void){
    int n, z, nout;
    bool f = false;
    setlocale(LC_ALL, "Russian");
    cout<<"Введите значение N и Z: ";
    cin>>n>>z;
    nout = n;
    while ((n>0) && (not f)){
        if ((n%10)==z) {
            f = true;

        }
        else{
            n = n / 10;
        }
    }
    if (f) {
        cout<<"Цифра "<<z<<" присутсвтует в числе "<<nout;
    }
    else {
        cout<<"Цифра "<<z<<" отсутствует в числе "<<nout;
    }
    cin.get();
    cin.get();

    return 0;}
