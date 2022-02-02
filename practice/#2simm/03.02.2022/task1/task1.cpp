//
// Created by Cake on 01.02.2022.
//
#include <iostream>
#include <windows.h>

using namespace std;


void subs(double a[], double b[]){
    //(a-c)+(b-d)i

    cout<<"Результат: ";
    cout<<(a[0]-b[0]);
    if ((a[1]-b[1])>=0){
        cout<<"+";
    }
    cout<<(a[1]-b[1])<<"i";
}

void subs(int a_i, int b_i){
    cout<<"Результат: ";
    cout<<(a_i - b_i);

}

int main(int argc, char* argv[]){
    int ai, bi;
    double re1, im1, re2, im2;
    double ac[2], bc[2];

    SetConsoleOutputCP(CP_UTF8);
    if (argc > 1){
        cout<<argv[1]<<endl;
        cout<<"Введите первое комплексное число в формате a+bi"<<endl;
        cin>>re1>>im1;
        cin.get();//пропустить букву i
        ac[0] = re1;
        ac[1] = im1;

        cout<<"Введите второе комплексное число"<<endl;

        cin>>re2>>im2;
        cin.get();//пропустить букву i
        bc[0] = re2;
        bc[1] = im2;

        subs(ac,bc);
    }
    else{
        cout<<"Введите 2 числа через пробел"<<endl;
        cin>>ai>>bi;
        subs(ai, bi);
    }

    cin.get();
    cin.get();
    return 0;}
