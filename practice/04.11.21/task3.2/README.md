# Задача №3.2
## Решение - task3.2.cpp
```c++
//
// Created by Cake on 04.11.2021.
//
#include <iostream>
#include <clocale>
#include <time.h> //для оператора difftime

using namespace std;

int h0, h1, m0, m1, s0, s1, time0, time1, dh, dm, ds;
double diff;
int main(){
setlocale(LC_ALL, "Russian");

//собираем начальное время
cout<<"Введите нижнюю границу временного интервала. Сначала часы, затем минуты, а после секунды"<<endl;
cout<<"Введите часы"<<endl;
cin>>h0;
cout<<"Введите минуты"<<endl;
cin>>m0;
cout<<"Введите секунды"<<endl;
cin>>s0;

//собираем конечное время
cout<<"Введите верхнюю границу временного интервала. Сначала часы, затем минуты, а после секунды"<<endl;
cout<<"Введите часы"<<endl;
cin>>h1;
cout<<"Введите минуты"<<endl;
cin>>m1;
cout<<"Введите секунды"<<endl;
cin>>s1;

//выводим начальное и конечное время
cout<<endl<<"Начальное время: "<<h0<<":"<<m0<<":"<<s0<<endl;
cout<<"Конечное время: "<<h1<<":"<<m1<<":"<<s1<<endl;

//преобразуем в секунды
time0 = h0 * 3600 + m0 * 60 + s0;
time1 = h1 * 3600 + m1 * 60 + s1;

//ищем разницу с помощью оператора difftime
diff = abs(difftime(time0, time1));

//преобразум разницу в H:M:S
dm = diff/60;
dh = dm / 60;
ds = int(diff) % 60;

//выводим разницу
cout<<endl<<"Разница: "<<dh<<":"<<dm%60<<":"<<ds<<endl;
return 0;}
```