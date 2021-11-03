//
// Created by Cake on 03.11.2021.
//
#include <iostream>
#include <clocale>

using namespace std;

double f, c;
int main(){
    setlocale(LC_ALL, "Russian");
    cout<<"Введите градусы по фаренгейту: "<<endl;
    cin>>f; //ввод градусов по фаренгейту
    c = 5*(f-32)/9; //преобразование градусов в цельсии
    cout<<"Число градусов по Цельсию: "<<c<<endl; //вывод в цельсиях

}
