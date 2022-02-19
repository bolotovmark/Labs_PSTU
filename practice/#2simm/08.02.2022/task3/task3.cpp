//
// Created by Cake on 08.02.2022.
//
#include <iostream>
#include <windows.h>

using namespace std;

int main(){

    int n, t = 0, k, p;
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите размерность массива: ";
    cin>>n;
    int** a = new int* [n];

    for(int i=0;i<n;++i){
        a[i] = new int[n];
        for(int j=0;j<n;++j){
            a[i][j]=++t;
        }
    }
    for(int i=0; i<n;++i){
        for(int j=0; j<n; ++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Введите строку и столбец, которые нужно поменять местами: ";
    cin>>k>>p;
    for(int i=0;i<n;i++){
        a[k-1][i]=a[i][p-1];
    }


    for(int i=0; i<n;++i){
        for(int j=0; j<n; ++j){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
