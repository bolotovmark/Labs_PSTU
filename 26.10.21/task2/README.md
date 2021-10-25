##Задача №2
#Решение - task2.cpp
```c++
//
// Created by Cake on 26.10.2021.
//
#include <iostream>
#include <clocale>
#include <time.h>

using namespace std;

int x=0, i = 0, y = 0, t=0;

int main(void)
{
setlocale(LC_ALL, "Russian");
srand(time(0));
x = rand()%101;

while (i < 7)
{
++i;
y=i;
t=0;

cout<<"Введите число"<<endl;
cin>>t;
cout<<endl;
if (t!=x){
if (t>x)
cout<<"Число "<<t<<" больше загаданного значения"<<endl;
else
cout<<"Число "<<t<<" меньше загаданного значения"<<endl;
}
else{
i=8;
cout<<endl<<"Вы угадали число '"<<x<<"' за "<<y<<" попыток!";
}
}
if ((i!=8)and(y>6)){
cout<<endl<<"Вы не угадали число ' "<<x<<" ' ;(";
}

return 0;}
```