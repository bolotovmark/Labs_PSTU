//
// Created by Cake on 01.12.2021.
//
#include <iostream>
#include <clocale>

using namespace std;

int main(void){
    setlocale(LC_ALL, "Russian");
    int a, b;
    bool f = true;
    cout<<"Введите первое число последовательности: ";
    cin>>a;

    if (a!=0){
        cout<<"Введите следующее число последовательности: ";
        cin>>b;

        while ((a!=b) && f && (b!=0)) {
            f = f && (a<b);
            if (f) {
                a = b;
                cout<<"Введите следующее число последовательности: ";
                cin>>b;
            }
        }
        if (f && (a!=b)){
            cout<<"Последовательность верна!";
        }
        else {
            cout<<"Последовательность неверна!";
        }
    }
    else {
        cout<<"Последовательность не содержит элементов";
    }
    cin.get();
    cin.get();

return 0;}
