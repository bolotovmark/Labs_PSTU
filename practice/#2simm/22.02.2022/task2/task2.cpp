//
// Created by Cake on 19.02.2022.
//
#include <iostream>
#include <windows.h>

using namespace std;

int f(int n){
    if (n==1){
        return 1;
    }
    else{
        return 2*f(n-1)+1;
    }

}
int main(){
    int p;
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите кол-во дисков на стержне: "<<endl;
    cin>>p;

    cout<<"Минимальное кол-во перестановок: "<<f(p);
return 0;}
