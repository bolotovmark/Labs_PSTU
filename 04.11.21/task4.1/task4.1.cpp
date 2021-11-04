//
// Created by Cake on 04.11.2021.
//
#include <iostream>
#include <clocale>

using namespace std;

double a, b;
int main(){
    setlocale(LC_ALL, "Russian");

    cout<<"Для умножение двух чисел вам нужно очерёдно ввести 2 числа"<<endl;
    cout<<endl<<"Введите первое число"<<endl;
    cin>>a;

    cout<<"Введите второе число"<<endl;
    cin>>b;

    cout<<endl<<"Результат: "<<a*b;
    return 0;}
