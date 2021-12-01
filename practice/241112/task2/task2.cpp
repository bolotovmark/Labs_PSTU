//
// Created by Cake on 24.11.2021.
//
#include <clocale>
#include <iostream>

using namespace std;

int main(){
    int n, s = 0, p=1, i, j;
    setlocale(LC_ALL, "Russian");

    cout<<"Введите число n: ";
    cin>>n;
    for (i=1;i<=n;i++){

        for (j=(i);j<=(i*2);j++){
            p=p*j;
        }
        s = s + p;
        p=1;
    }

    cout<<endl<<"Результат работы: "<<s<<endl;
    cin.get();
    cin.get();

}
