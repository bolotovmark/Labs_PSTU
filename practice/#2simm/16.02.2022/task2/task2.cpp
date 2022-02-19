//
// Created by Cake on 16.02.2022.
//
#include <iostream>
#include <random>
#include <ctime>
#include <windows.h>

using namespace std;

int P(int arr[], int s, int e){
    int pivot = arr[e];
    int pIndex = s;

    for(int i = s;i<e;i++){
        if(arr[i]<pivot){
            int temp = arr[i];
            arr[i] = arr[pIndex];
            arr[pIndex] = temp;
            pIndex++;
        }
    }

    int temp = arr[e];
    arr[e] = arr[pIndex];
    arr[pIndex] = temp;

    return pIndex;
}

void QuickSort(int arr[], int s, int e){
    if(s<e){
        int p = P(arr,s, e);
        QuickSort(arr, s, (p-1));  // left
        QuickSort(arr, (p+1), e);  // right
    }
}

int main(){
    int n=0;
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите размер массива: ";
    cin>>n;
    int myarray[n];

    srand(time(NULL));
    for (int i = 0; i < n; ++i){
        myarray[i] = rand() % 100;
    }
    cout << endl;

    for(int i=0;i<n;i++){
        cout<<myarray[i]<<" ";
    }
    cout<<endl;

    QuickSort(myarray,0,(n-1));
    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<myarray[i]<<" ";
    }

    return 0;
}
