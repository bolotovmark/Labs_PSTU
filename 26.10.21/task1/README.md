#Задача №1
##Решение - task1.cpp
```c++
//
// Created by Cake on 25.10.2021.
//
#include <clocale>
#include <iostream>


using namespace std;

int x, a, b, c;

int main() {
setlocale(LC_ALL, "Russian");
cout << "Введите трёхзначное число" << endl;
cin >> x;
while ((x < 100) or (x > 999)) {
cout << "Введено не трёхзначное число" << endl;
cin >> x;
}


a = x / 100;
b = (x % 100) / 10;
c = x % 10;

cout <<"Вывод комбинаций"<< endl << a << b << c << endl;
cout << a << c << b << endl;
cout << b << a << c << endl;
cout << b << c << a << endl;
cout << c << a << b << endl;
cout << c << b << a << endl << endl;

if ((a > b) and (a > c)) cout <<"Максимальное значение "<< a<<max(b,c)<<min(b,c);

if ((b > a) and (b > c)) cout<<"Максимальное значение "<<b<<max(a,c)<<min(a,c);

if ((c>a) and (c>b)) cout<<"Максимальное значение "<<c<<max(a,b)<<min(a,b);



return 0;
}
```