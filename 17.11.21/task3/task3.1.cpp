//
// Created by Cake on 15.11.2021.
//
#include <iostream>
#include <clocale>

using namespace std;

int x;
int main(void){
    setlocale(LC_ALL, "Rus");

    cout<<"Введите цифру";
    cin>>x;
    switch (x) {
        case 0:
            cout<<"0,1,2,3,4,5,6,7,8,9";
            break;
        case 1:
            cout<<"1,2,3,4,5,6,7,8,9";
            break;
        case 2:
            cout<<"2,3,4,5,6,7,8,9";
            break;
        case 3:
            cout<<"3,4,5,6,7,8,9";
            break;
        case 4:
            cout<<"4,5,6,7,8,9";
            break;
        case 5:
            cout<<"5,6,7,8,9";
            break;
        case 6:
            cout<<"6,7,8,9";
            break;
        case 7:
            cout<<"7,8,9";
            break;
        case 8:
            cout<<"8,9";
            break;
        case 9:
            cout<<"9";
            break;
    }
    return 0;}

