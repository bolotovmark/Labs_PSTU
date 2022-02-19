//
// Created by Cake on 19.02.2022.
//
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void check(const char* c){
    char arr[] = "0123456789";
    int a=1, b=1, count=0;
    while(*c!='\0'){
        if (*c==' '){
            if (count==1){
                for (int i=b;i>a;--i){
                    --c;
                }
                for (int j=a;j<b;++j){
                    cout<<*c;
                    ++c;
                }
                cout<<endl;
            }
            a = b+1;
            count = 0;
        }
        else{
            if (strcspn(c,arr)==0){
                ++count;
            }
        }
        ++c;
        ++b;
    }
    if (count==1){
        for (int i=b;i>a;--i){
            --c;
        }
        for (int j=a;j<b;++j){
            cout<<*c;
            ++c;
        }
    }
return;}

int main(){
    string a;
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите предложение:"<<endl;
    getline(cin, a);
    check(a.data());
return 0;}
