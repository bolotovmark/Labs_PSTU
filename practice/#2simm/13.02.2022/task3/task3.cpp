//
// Created by Cake on 13.02.2022.
//
#include <iostream>
#include <random>
#include <ctime>
#include <windows.h>

using namespace std;

int main(){
    int z, n, g=0, a;
    bool f = false;

    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите размер массива:";
    cin>>n;
    int *arr = new int[n];

    srand(time(NULL));
    for(int i=0; i<n;++i){
        arr[i] = rand() % 100;
    }
    cout<<endl;
    for (int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }

    cout<<endl<<"Введите Z:";
    cin>>z;
    while ((g!=n) && (f==false)){
        if (arr[g]==z){
            f = true;
        }
        ++g;
    }
    if (f){
        for (int j=g-1;j!=n-1;++j){
            arr[j]=arr[j+1];
        }
        cout<<endl;
        for (int i = 0; i < n-1; i++){
            cout << arr[i]<<" ";
        }
        cout<<endl<<"Введите номер элемента куда вставить Z:";
        cin>>a;
        for (int k=n-1;k!=a;--k){
            arr[k+1] = arr[k];
        }
        arr[a-1]=z;
        cout<<endl;
        for (int i = 0; i < n; i++){
            cout << arr[i]<<" ";
        }
    }
    else{
        cout<<"Элемент не найден!";
    }


}