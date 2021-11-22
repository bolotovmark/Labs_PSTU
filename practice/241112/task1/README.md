# Задача №1
## Решение - task1.cpp
```c++
//
// Created by Cake on 22.11.2021.
//
#include <iostream>
#include <clocale>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
int n;
cout << "Введите сторону квадрата: ";
cin >> n;

for (int i = 1 ; i <= n; i ++)
{
for (int j = 1; j <= n; j++)
{
bool ok = i == 1 || i == n;
if (ok)
{
cout << "* ";
}
else
{
bool ok = j == 1 || j == n;
if ( ok )
{
cout << "* ";
}
else
{
cout << "  ";
}
ok = false;
}
ok = false;
}
cout << "\n";
}

cin.get();
cin.get();
return 0;
}
```
