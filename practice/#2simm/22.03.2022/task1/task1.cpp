//
// Created by Cake on 21.03.2022.
//
#include <iostream>
#include <windows.h>
#include <random>
#include <time.h>


using namespace std;

int main(){
    int num[26];
    SetConsoleOutputCP(CP_UTF8);
    srand(time(NULL));
    for(int i=0; i<24; ++i){
        num[i] = rand() % 100;
    }

    //array
    for (int t=0; t<24; ++t){
        cout<<"  "<<num[t];
    }
    cout<<endl<<"-----------------------------------------";

    int k;
    cout<<endl<<"Введите искомый элемент:";
    cin>>k;
    cout<<endl;
    int i=0;
    bool f= false;
    while((i<24)&&(!f)){
        if(num[i]==k){
            f=true;
        }
        else{
            ++i;
        }
    }
    if(f){
        cout<<endl;
        for(int t=25;t!=i;--t){
            num[t]=num[t-1];
        }
        num[i]=777;
        for (int t=0; t<25; ++t){
            cout<<"  "<<num[t];
        }
        cout<<endl<<"-----------------------------------------";
    }
    else{
        cout<<"Значение не найденно";
    }

}


