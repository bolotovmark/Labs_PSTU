//
// Created by Cake on 12.11.2021.
//
#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;

int main(void){
    setlocale(LC_ALL, "Russian");
    //(a+b)^3 - a^3 / (3*a*(b)^2 + b^3 + 3*(a)^2*b)

    //float
    const float fa = 1000;
    const float fb = 0.0001;

    float f1, f2, f3, f4, f5, f6, f7;

    f1 = pow((fa+fb), 3);  //(a+b)^3
    f2 = pow(fa, 3);          //a^3
    f3 = f1 - f2;                //(a+b)^3 - a^3
    f4 = 3 * fa * pow(fb, 2); //3a(b)^2
    f5 = pow(fb, 3);          //b^3
    f6 = 3 * pow(fa, 2) * fb; //3*(a)^2*b
    f7 = f4 + f5 + f6;           //3*a*(b)^2 + b^3 + 3*(a)^2*b

    cout<<"Разбор по действиям типе float:"<<endl;
    cout<<endl<<"(a+b)^3 ==> "<<f1<<endl;
    cout<<"a^3 ==> "<<f2<<endl;
    cout<<"(a+b)^3 - a^3 ==> "<<f3<<endl;
    cout<<"3a(b)^2 ==> "<<f4<<endl;
    cout<<"b^3 ==> "<<f5<<endl;
    cout<<"3*(a)^2*b ==> "<<f6<<endl;
    cout<<"3*a*(b)^2 + b^3 + 3*(a)^2*b ==> "<<f7<<endl;

    cout<<endl<<"Ответ при float: "<<f3/f7<<endl;


    //double
    const double da = 1000;
    const double db = 0.0001;

    double d1, d2, d3, d4, d5, d6, d7;

    d1 = pow((da+db), 3);  //(a+b)^3
    d2 = pow(da, 3);          //a^3
    d3 = d1 - d2;                //(a+b)^3 - a^3
    d4 = 3 * da * pow(db, 2); //3a(b)^2
    d5 = pow(db, 3);          //b^3
    d6 = 3 * pow(da, 2) * db; //3*(a)^2*b
    d7 = d4 + d5 + d6;           //3*a*(b)^2 + b^3 + 3*(a)^2*b

    cout<<endl<<"Разбор по действиям типе double:"<<endl;
    cout<<endl<<"(a+b)^3 ==> "<<d1<<endl;
    cout<<"a^3 ==> "<<d2<<endl;
    cout<<"(a+b)^3 - a^3 ==> "<<d3<<endl;
    cout<<"3a(b)^2 ==> "<<d4<<endl;
    cout<<"b^3 ==> "<<d5<<endl;
    cout<<"3*(a)^2*b ==> "<<d6<<endl;
    cout<<"3*a*(b)^2 + b^3 + 3*(a)^2*b ==> "<<d7<<endl;

    cout<<endl<<"Ответ при double: "<<d3/d7;

    return 0;}