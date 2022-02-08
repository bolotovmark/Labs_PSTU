//
// Created by Cake on 06.02.2022.
//
#include <iostream>
#include <random>
#include <ctime>

using namespace std;

int main(){
    int A[10];
    int j, c;
    bool f;

    srand(time(NULL));
    for(int i=0; i<10; ++i){
        A[i] = rand() % 100;
    }

    for (int i = 0; i < 10; i++){
        cout << A[i]<<" ";
    }
    cout<<endl;

    for (int i = 1; i<10; i++){
        f = false;
        c = A[i];
        j = i-1;
        while ((j>=0)&&(!f)){
            if (A[j] > c){
                A[j+1] = A[j];
                A[j] = c;
            }
            else{
                f = true;
            }
            --j;
        }

    }
    for (int i = 0; i < 10; i++){
        cout << A[i]<<" ";
    }
    return 0;}

//{1, 2, 3}
//{1, 0, 2, 0, 3, 0}