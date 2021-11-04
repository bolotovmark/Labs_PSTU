# Задача №1.1
## Решение - task1.1.cpp
```c++
//
// Created by Cake on 03.11.2021.
//
#include <iostream>


using namespace std;
int main()
{
    int a = 10;
    int *address; // (*address - это указатель на значение - int)
    cout << a << endl; // выводим значение переменной a
    cout << &a << endl; // выводим адрес переменной a
    address = &a; // записываем адрес переменной а в переменную address
    cout << *address << endl; // выводим значение ячейки памяти переменной a

    return 0;
}
```