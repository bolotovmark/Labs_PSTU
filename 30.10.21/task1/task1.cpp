//
// Created by Cake on 25.10.2021.
//
#include <clocale>
#include <iostream>


using namespace std;

int x, a, b, c;
bool f(false);

int main() {
    setlocale(LC_ALL, "Russian");
    cout << "Введите трёхзначное число" << endl;

    while (f == false){
        cin >> x;
        a = x / 100;
        b = (x % 100) / 10;
        c = x % 10;
        if (((x > 100) and (x < 1000)) and (((a!=b) and (b!=c) and (a!=c)))){

            f = true;
        }
        else {
            cout << "Введено не трёхзначное число или есть повторяющиеся цифры\nПопробуйте ещё раз!\n" << endl;
        }
    }

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