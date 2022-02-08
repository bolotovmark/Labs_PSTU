//
// Created by Cake on 07.02.2022.
//
#include <iostream>

using namespace std;

int main(){
    int m, n;
    cin>>m>>n;
    /*while (m!=n){
        if (m > n){
            m = m - n;
        }
        else
            n = n - m;
    }
    cout<<m;*/


    while (m!=0 && n!=0){          //ПО ЕВКЛИДУ
        if (m>n){
            m = m % n;
            cout<<m<<endl;
        }
        else{
            n = n % m;
            cout<<n<<endl;
        }
    }
    if (m==0 && n == 0){
        cout<<"ошибка";
    }
    else{
        cout<<m+n;
    }
}
