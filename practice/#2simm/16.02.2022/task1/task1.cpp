//
// Created by Cake on 14.02.2022.
//
#include <iostream>
#include <random>
#include <ctime>
#include <windows.h>

using namespace std;

int main() {
    int n, c, d, j;
    bool f;

    SetConsoleOutputCP(CP_UTF8);
    cout << "Введите размер массива:";
    cin >> n;
    int *arr = new int[n];

    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        arr[i] = rand() % 100;
    }
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout<<endl<<endl;
    d = n/2;
    while(d!=1){
        for(int g=0;g!=d-1;++g){
            if (arr[g] > arr[g+d]){
                c = arr[g];
                arr[g] = arr[g+d];
                arr[g+d] = c;
            }
        }
        d = d/2;
    }
    for (int i = 1; i<n; i++){
        f = false;
        c = arr[i];
        j = i-1;
        while ((j>=0)&&(!f)){
            if (arr[j] > c){
                arr[j+1] = arr[j];
                arr[j] = c;
            }
            else{
                f = true;
            }
            --j;
        }

    }
    for (int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }
    delete [] arr;
}