//
// Created by Cake on 14.11.2021.
//
#include <iostream>


using namespace std;



int main(void){
    int n=2, m=2;
    bool f1, f2;
    cout<<n++*m<<" = n++*m"<<" at n=2 m=2"<<endl;

    n=1;
    m=2;
    f1 = (n++<m);
    cout<<f1<<" TRUE (n++ < m) at n=1 m=2"<<endl;

    m=2;
    f2 = (m-- > m);
    cout<<f2<<" TRUE (m-- > m) at m=2"<<endl;
    return 0;}

