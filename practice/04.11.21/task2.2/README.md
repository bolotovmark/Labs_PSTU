# Задача №2.2
## Решение - task2.cpp
```c++
//
// Created by Cake on 31.10.2021.
//

#include <iostream>
#include <clocale>

using namespace std;

float x;
const float i = 7.481; // 1 куб фут = 7.481 галлона

int main(){
setlocale(LC_ALL, "Russian");
cout<<"Введите количетсво галлонов"<<endl;
cin>>x; //ввод числа галлонов
cout<<endl<<x<<" галлонов в кубических футах это - "<<x/i<<endl; //галоны -> куб. фут

return 0;}
```