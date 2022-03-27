//
// Created by Cake on 22.03.2022.
//
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void check(const char* str0, const char* str1){
    int n0=0, n1=0;
    while(*str1!='\0'){
        ++n1;
        cout<<*str1;
        ++str1;
    }
    while(*str0!='\0'){
        ++n0;
        cout<<*str0;
        ++str0;
    }
    if(n0>n1){
        cout<<"Шаблон больше строки";
        return;
    }
    else{
        --str1;
        --str0;
        bool f = false;
        while((*str1!='\0')){
            if(*str1==*str0){
                while((*str0!='\0')){

                }
            }
            --str1;
        }
    }

}

int main(){
    int n;
    string str0, str1;
    string a;
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите кол-во проверок:";
    cin>>n;
    getline(cin, str0);
    cout<<"Введите шаблон:";
    getline(cin, str0);
    for(int i=0;i<n;++i){
        cout<<endl<<"Введите строку:";
        getline(cin, str1);
        check(str0.data(), str1.data());
    }

}
