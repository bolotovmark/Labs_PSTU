//
// Created by Cake on 03.11.2021.
//
#include <iostream>

int main()
{
    int a = 10;
    std::cout << a << '\n'; // выводим значение переменной a
    std::cout << &a << '\n'; // выводим адрес переменной a
    std::cout << *&a << '\n'; /// выводим значение ячейки памяти переменной a

    return 0;
}
