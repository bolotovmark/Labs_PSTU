//
// Created by Cake on 14.11.2021.
//
#include <iostream>
#include <clocale>

using namespace std;



int main(void){
    int n=1, m=1;
    bool f1, f2;
    cout<<n++*m<<endl;

    n=1;
    m=2;
    f1 = n++<m;
    cout<<f1<<endl;

    n=1;
    m=1;
    f2 = m-- > m;
    cout<<f2<<endl;
    return 0;}

