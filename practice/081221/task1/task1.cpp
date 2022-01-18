//
// Created by Cake on 08.12.2021.
//
#include <iostream>
#include <cmath>
#include <windows.h>


using namespace std;

int main(void){
    double a, b, c, e, fa, fc, f;
    //f(x)=0,25x^3+x-1,2502=0
    //[0,2]
    //1,0001
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите через пробел значение a, b, e"<<endl;
    cin>>a>>b>>e;

    do{
        c = (a+b)/2;
        fa = (0.25 * pow(a, 3)) + a - 1.2502;
        fc = (0.25 * pow(c, 3)) + c - 1.2502;
        if ((fa*fc)<0){
            b = c;
        }
        else{
            a = c;
        }
        f = abs((a-b));
    } while (f>e);

    cout<<endl<<c;
    cin.get();
    cin.get();

    return 0;}
