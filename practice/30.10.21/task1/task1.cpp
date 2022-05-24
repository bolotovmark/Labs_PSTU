//
// Created by Cake on 25.10.2021.
//
#include <clocale>
#include <iostream>


using namespace std;

int x, a, b, c, t;

int main() {
    setlocale(LC_ALL, "Russian");

    while (t!=5) {
        cout << "Введите трёхзначное число без повторяющихся цифр"<<endl;
        cin >> x;
        a = x / 100;
        b = (x % 100) / 10;
        c = x % 10;
        t = 0;
        if (x<1000){
            ++t;
        }
        if (x>100){
            ++t;
        }
        if (a!=b){
            ++t;
        }
        if (b!=c){
            ++t;
        }
        if (a!=c){
            ++t;
        }
    }
    cout <<"Вывод комбинаций"<< endl << a << b << c << endl;
    cout << a << c << b << endl;
    cout << b << a << c << endl;
    cout << b << c << a << endl;
    cout << c << a << b << endl;
    cout << c << b << a << endl << endl;

    if (a > b){
        if(a > c){
            cout <<"Максимальное значение "<< a<<max(b,c)<<min(b,c);
        }
    }

    if (b > a){
        if(b > c){
             cout<<"Максимальное значение "<<b<<max(a,c)<<min(a,c);
        }
    }

    if (c>a){
        if(c>b){
            cout<<"Максимальное значение "<<c<<max(a,b)<<min(a,b);
        }
    }


    return 0;
}