//
// Created by Cake on 13.02.2022.
//
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main(){
    int n, l, g = 1, t=1;

    cin>>n;
    int *arr = new int[100];

    srand(time(NULL));
    for(int i=0; i<n;++i){
        arr[i] = rand() % 100-(50);
    }
    cout<<endl;
    for (int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }

    l = n;
    while (l != g){
        if (g%3==0){
            --l;
            for (int j=g;j!=l;++j){
                arr[j]=arr[j+1];
            }
        }
        g++;
    }

    cout<<endl;
    for (int *q=arr;q!=arr+l;q++){

        cout<<*q<<' ';
    }

    while (l!=t){
        if (arr[t]<0){
            for (int k=l;k!=t;--k){
                arr[k+1] = arr[k];
            }
            arr[t+1] = arr[t-1] + 1;

            ++t;
            ++l;
        }
        ++t;
    }

    cout<<endl;
    for (int *q=arr;q!=arr+l;q++){

        cout<<*q<<' ';
    }

}
