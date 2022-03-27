//
// Created by Cake on 14.02.2022.
//
#include <iostream>
#include <random>
#include <ctime>
#include <windows.h>

using namespace std;



int InterpolSearch(int arr[], int n, int k)
{
    int mid, left=0, right=n-1;
    while (arr[left]<=k && arr[right]>=k)
    {
        if (arr[right]==arr[left])
            break;
        mid=left+((k-arr[left])*(right-left))/(arr[right]-arr[left]);
        if (arr[mid]<k)
            left=mid+1;
        else{
            if (arr[mid]>k){
                right=mid-1;
            }
            else{
                return mid;
            }
        }
    }
    if (arr[left]==k)
        return left;
    if (arr[right]==k)
        return right;
    return -1;
}

int main() {
    int n, c, d, j, k;
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
    cout<<endl<<"Введите значение искомого элемента:";
    cin>>k;
    int out;
    out = InterpolSearch(arr, n, k);
    while(out!=-1){
        --n;
        for(int i=out;i<n;++i){
            arr[i] = arr[i+1];
        }
        out = InterpolSearch(arr, n, k);
    }
    cout<<endl;
    for (int i = 0; i < n; i++){
        cout << arr[i]<<" ";
    }

    delete [] arr;
}