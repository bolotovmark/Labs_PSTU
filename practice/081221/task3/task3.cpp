//
// Created by Cake on 10.12.2021.
//
#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std;

double myf(double x) {
    return 0.25*pow(x, 3)+x-1.2502;
}

double FHI(double x, double l) {
    return x + l * myf(x);
}

double diff(double x, double f(double x)){
    const double h1=1e-10;
    return (f(x+h1)-f(x-h1))/(2.0*h1);
}



int main(void){
    double e, x0, x1, d, a, b, c, r, ra, rb, l;
    //f(x)=0,25x^3+x-1,2502=0
    //[0,2]
    //1,0001
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите через пробел границы интервала [a, b] и значение e"<<endl;
    cin>>a>>b>>e;

    c = abs(((a+b)/2));

    ra = abs((diff(a, myf)));
    rb = abs((diff(b, myf)));
    if (ra > rb){
        r = ra;
    }
    else{
        r = rb;
    }

    if ((diff(c, myf))>0){
        l = -0.5 / r;
    }
    else{
        l = 0.5 / r;
    }
    x0 = c;
    do{
        x1 = FHI(x0, l);
        d = x1 - x0;
        x0 = x1;
    }while ((fabs(d) > e));


    cout<<x1;
    cin.get();
    cin.get();
    return 0;}


