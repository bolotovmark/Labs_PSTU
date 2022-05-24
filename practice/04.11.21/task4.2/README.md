# Задача 4.2
## Решение - task4.2.cpp
```c++
//
// Created by Cake on 04.11.2021.
//
#include <iostream>
#include <clocale>

using namespace std;

double i1, i2, i3, i4, i5;

int main(){
    setlocale(LC_ALL, "Russian");
    cout<<"Введите 5 чисел через пробел и нажмите enter"<<endl;
    cin>>i1>>i2>>i3>>i4>>i5; //вводим последовательность через пробел
    cout << endl << i5 << " | " << i4 << " | " << i3 << " | " << i2<< " | " << i1; //выводим результат

    return 0;}
```