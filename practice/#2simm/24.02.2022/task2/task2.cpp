//
// Created by Cake on 22.02.2022.
//
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

int main(){
    struct pay{
        string name;
        int day;
        int salary;
        int premium;
    };

    SetConsoleOutputCP(CP_UTF8);
    pay N1;

    string FST;
    cout<<"Введите имя сотрудника:";
    getline(cin, FST);
    N1.name = FST;

    cout<<"Укажите число отработанных дней:";
    cin>>N1.day;

    cout<<"Какая оплата за день? -";
    cin>>N1.salary;

    cout<<"Укажите премию:";
    cin>>N1.premium;

    cout<<"Сотрудник: "<<N1.name<<endl<<"Ваша зарплата ==> "<<N1.salary*N1.day+N1.premium<<endl;
return 0;}
