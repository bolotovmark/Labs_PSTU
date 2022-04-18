//
// Created by Cake on 28.03.2022.
//
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

class number{
private:
    string num;
    int order;
    float mantissa;
public:
    number(){
        num = "";
        order = 0;
        mantissa = 0;
    }

    number(string num, int order, float mantissa){
        this->num = num;
        this->order = order;
        this->mantissa = mantissa;
    }

    number(const number &t){
        num = t.num;
        order = t.order;
        mantissa = t.mantissa;
    }

    void show(){
        cout<<"num: "<<num<<endl<<"order: "<<order<<endl<<"mantissa: "<<mantissa<<endl<<endl;
    }

    void set(string num, int order, float mantissa){
        this->num = num;
        this->order = order;
        this->mantissa = mantissa;
    }

    ~number(){
        cout<<"Деструктор"<<endl;
    }

};

int main(){
    string num;
    SetConsoleOutputCP(CP_UTF8);

    number a1;
    a1.show();

    number a2("567.1561", 3 , 0.5671561);
    a2.show();

    number a3=a2;
    a3.set("4.326", 1, 0.4326);
    a3.show();

}