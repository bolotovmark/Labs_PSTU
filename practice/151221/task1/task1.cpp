//
// Created by Cake on 15.12.2021.
//
#include <iostream>
#include <windows.h>

using namespace std;

int main(void){
    int n, s=0, g, max=-1, x;
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите количество элементов последовательности: ";
    cin>>n;
    for (int i=1; i<=n; i++){
        cout<<"Введите cледующий элемент: ";
        cin>>x;
        if (max<x) {
            max=x;
            g = i;
            s = 1;

        }
        else{
            if (max == x){
                s=s+1;
            }
        }
    }
    cout<<endl<<"Максимальное значение в последовательности: "<<max;
    cout<<endl<<"Номер в последовтельности: "<<g;
    cout<<endl<<"Кол-во таких значений в последовательности: "<<s;
    cin.get();
    cin.get();
return 0; }
