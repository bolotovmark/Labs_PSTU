//
// Created by Cake on 15.11.2021.
//
#include <iostream>
#include <clocale>

using namespace std;

double x, y;
int i;

int main(void){

    setlocale(LC_ALL, "Rus");

    cout<<"Введите два числа над которыми будут производиться действия через пробел"<<endl;
    cin>>x>>y;
    cout<<"Выберите тип операции:\n 1) SUM\n 2) SUBTRACT\n 3) DIVIDE\n 4) MULTIPLY"<<endl;
    cout<<endl<<"Для выбора напишите её номер"<<endl;
    cin>>i;
    switch (i) {
        case 1:
            cout<<"Итог суммы для чисел "<<x<< " и "<<y<<": "<<x+y<<endl;
            break;
        case 2:
            cout<<"Итог вычитание для чисел "<<x<< " и "<<y<<": "<<x-y<<endl;
            break;
        case 3:
            cout<<"Итог деление для чисел "<<x<< " и "<<y<<": "<<x/y<<endl;
            break;
        case 4:
            cout<<"Итог умножение для чисел "<<x<< " и "<<y<<": "<<x*y<<endl;
            break;
        default:
            cout<<"Введено неверное значение";
            break;
    }
    return 0;}