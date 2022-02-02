//
// Created by Cake on 02.02.2022.
//
#include <iostream>
#include <random>
#include <ctime>

using namespace std;


int main(){
    int num[10];
    int c;

    //random
    srand(time(NULL));
    for(int i=0; i<10; ++i){
        num[i] = rand() % 100;
    }

    //array
    for (int t=0; t<10; ++t){
        cout<<"  "<<num[t];
    }
    cout<<endl<<"-----------------------------------------";

    //sort
    for (int r=0; r<10;++r){
        for (int y=9; y>r;--y){
            if (num[y]<num[y-1]){
                c = num[y];
                num[y] = num[y-1];
                num[y-1] = c;

                cout<<endl;
                for (int t=0; t<10; ++t){
                    cout<<"  "<<num[t];
                }
            }


        }
    }
}

