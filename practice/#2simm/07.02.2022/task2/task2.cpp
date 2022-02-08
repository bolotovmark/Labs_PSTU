//
// Created by Cake on 07.02.2022.
//
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main(){
    int a[10];
    int c, min;

    srand(time(NULL));
    for(int i=0; i<10; ++i){
        a[i] = rand() % 100;
    }

    for (int i = 0; i < 10; i++){
        cout << a[i]<<" ";
    }
    cout<<endl;

    for(int j=1; j<10; ++j){
        min=100;
        for(int g=(j-1); g<10;++g){
            if (a[g]<min){
                min = a[g];
                c = g;
            }
        }
        a[c] = a[j-1];
        a[j-1] = min;
    }
    for (int i = 0; i < 10; i++){
        cout << a[i]<<" ";
    }

}

