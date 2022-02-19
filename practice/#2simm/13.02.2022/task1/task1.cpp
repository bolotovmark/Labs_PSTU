//
// Created by Cake on 10.02.2022.
//
#include <iostream>
#include <random>
#include <ctime>
#include <windows.h>

using namespace std;

void del(int **a, int c, int b, int n, int m){
    for (int k=c-1;k!=n-(abs(b-c));++k){
        for (int g=0;g!=m;++g){
            a[k][g]=a[k+(abs(b-c))+1][g];
        }
    }
}

int main(){
    int p, k, t, y;

    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите размерность массива через пробел:";
    cin>>p>>k;
    int **arr = new int*[p];


    srand(time(NULL));
    for(int i=0; i<p;++i){
        arr[i] = new int [k];
        for (int j=0; j<k;j++){
            arr[i][j] = rand() % 100;
        }
    }
    for(int i=0; i<p;++i){
        for(int j=0; j<k; ++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"Введите с какой по какую строчку нужно удалить:";
    cin>>t>>y;
    del(arr, t, y, p, k);
    for(int i=0; i<p-(abs(t-y))-1;++i){
        for(int j=0; j<k; ++j){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
