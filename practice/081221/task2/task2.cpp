//
// Created by Cake on 08.12.2021.
//
#include <iostream>
#include <cmath>
#include <windows.h>


using namespace std;

double myf(double x) {
    return 0.25*pow(x, 3)+x-1.2502;
}

double diff(double x, double f(double x)){
    const double h1=1e-10;
    return (f(x+h1)-f(x-h1))/(2.0*h1);
}

double diff2(double x, double f(double x)){
    const double h2=1e-10;
    return (f(x+h2)-2.*f(x)+f(x-h2))/(h2*h2);
}

int main(void){
    double a, b, e, f1, f2, f, x0, h0;
    //f(x)=0,25x^3+x-1,2502=0
    //[0,2]
    //1,0001
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите через пробел значение a, b, e"<<endl;
    cin>>a>>b>>e;
    f1 = diff(b,myf);
    f2 = diff2(b,myf);
    if (f1 * f2 > 0){
        x0 = b;
    }
    else {
        x0 = a;
    }
    do {
        f = myf(x0);
        f1 = diff(x0,myf);
        h0 = f / f1;
        x0 = x0 - h0;
    } while (fabs(h0)>=e);

    cout<<x0;
    cin.get();
    cin.get();

return 0;}

