//
// Created by Cake on 22.02.2022.
//
#include <iostream>
#include <windows.h>

using namespace std;

int main(){
    struct Advertising{
        int watch;
        int click;
        int earnings;
    };
    SetConsoleOutputCP(CP_UTF8);
    Advertising adv;
    cout<<"Введите кол-во просмотров обьявления:";
    cin>>adv.watch;
    cout<<endl<<"Введите процент посетителей нажавших на обьявление (%):";
    cin>>adv.click;
    cout<<endl<<"Введите кол-во среднего заработка за каждый клик на обьявление: ";
    cin>>adv.earnings;

    cout<<endl<<"Ваш доход с обьявления == "<<(adv.watch * adv.click * adv.earnings)/100;

return 0;}