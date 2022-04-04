//
// Created by Cake on 31.03.2022.
//
#include <iostream>
#include <windows.h>

using namespace std;

class time{
private:
    int min;
    int sec;
public:
    time(){
        min = 0;
        sec = 0;
    }
    time(int min, int sec){
        if ((sec<=60)&&(min<=60)){
            this->min = min;
            this->sec = sec;
        }
        else{
            cout<<"Ошибка!"<<endl;
            this->min = 0;
            this->sec = 0;
        }
    }
    time set(int min, int sec){
        if ((sec<=60)&&(min<=60)){
            this->min = min;
            this->sec = sec;
        }
        else{
            cout<<"Ошибка!"<<endl;
            this->min = 0;
            this->sec = 0;
        }
    }

    friend ostream& operator<<(ostream&, const time&);
    friend bool operator==(const time&, const time&);
    friend bool operator!=(const time&, const time&);
};

ostream& operator<<(ostream &os, const time& d){
    return os << d.min << ":"<<d.sec<<endl;
}

bool operator==(const time& f, const time& d){
    if((f.min==d.min)&&(f.sec==d.sec)){
        return true;
    }
    else{
        return false;
    }
}

bool operator!=(const time& f, const time& d){
    if((f.min==d.min)&&(f.sec==d.sec)){
        return false;
    }
    else{
        return true;
    }
}

int main(){
    SetConsoleOutputCP(CP_UTF8);
    time a(70,40);
    cout<<a;

    a.set(50, 33);
    cout<<"A: "<<a;
    time b(9, 26);
    cout<<"B: "<<b;
    cout<<"Результат сравнение a == b: "<<(a==b);
    cout<<endl<<"Результат сравнение a != b: "<<(a!=b);
    time c(9, 26);
    cout<<endl<<"C: "<<c;
    cout<<"Результат сравнение b == c: "<<(b==c);
    cout<<endl<<"Результат сравнение b != c: "<<(b!=c);
}