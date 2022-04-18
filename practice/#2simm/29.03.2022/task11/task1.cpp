//
// Created by Cake on 28.03.2022.
//
#include "iostream"
#include "windows.h"

using namespace std;

class rangecheck {
private:
    long double first;
    long double second;
public:
    void set(double first, double second){
        this->first = first;
        this->second = second;
    }

    bool check(double x){
        if ((first<x)&&(second>x)){
            return true;
        }
        else
            return false;
    }

    void show(){
        cout<<"Выбранные границы ==> first: "<<first;
        cout<<"second: "<<second<<endl;
    }
};

int main(){
    double first, second, x;
    SetConsoleOutputCP(CP_UTF8);
    cout<<"Введите границы ==> \nfirst: ";
    cin>>first;
    cout<<"second: ";
    cin>>second;
    cout<<endl;

    rangecheck a;
    a.set(first, second);
    a.show();
    cout<<endl;
    cout<<endl<<"Введите проверяемое число: ";
    cin>>x;
    cout<<endl;
    if (a.check(x)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}