//
// Created by Cake on 17.04.2022.
//
#include <iostream>

using namespace std;

class Pair{
protected:
    int first;
    int second;
public:
    Pair(){
        first = 0;
        second = 0;
    }

    Pair(int first, int second){
        this->first = first;
        this->second = second;
    }

    Pair& operator+(const Pair& d){
        int temp1 = this->first + this->second;
        int temp2 = d.first + d.second;
        this->first = temp1;
        this->second = temp2;
        return *this;
    }

    Pair& operator*(const Pair& d){
        this->first = this->first * d.first - this->second*d.second;
        this->second = this->first * d.second + this->second*d.first;
        return *this;
    }

    Pair& operator-(const Pair& d){
        int temp1 = this->first - this->second;
        int temp2 = d.first - d.second;
        this->first = temp1;
        this->second = temp2;
        return *this;
    }

    virtual void show(){
        cout<< "("<<first << ","<<second<<")"<<endl;
    }
    friend ostream& operator<<(ostream&, const Pair&);

};

class Complex:public Pair{
public:

    void show(){
        if(second<0) {
            cout<<first<<second<<"i"<<endl;
        }
        else{
            cout<<first<<"+"<<second<<"i"<<endl;
        }
    }
    Complex():Pair(){};

    Complex(int first, int second){
        this->first = first;
        this->second = second;
    }

    Complex& operator+(const Complex& d){
        int temp1 = this->first + this->second;
        int temp2 = d.first + d.second;
        this->first = temp1;
        this->second = temp2;
        return *this;
    }

    Complex& operator*(const Complex& d){
        this->first = this->first * d.first - this->second*d.second;
        this->second = this->first * d.second + this->second*d.first;
        return *this;
    }

    Complex& operator-(const Complex& d){
        int temp1 = this->first - this->second;
        int temp2 = d.first - d.second;
        this->first = temp1;
        this->second = temp2;
        return *this;
    }
    friend ostream& operator<<(ostream&, const Complex&);

};

ostream& operator<<(ostream& os, const Complex& h){
    if(h.second<0) {
        return os<<h.first<<h.second<<"i"<<endl;
    }
    else{
        return os<<h.first<<"+"<<h.second<<"i"<<endl;
    }
}

ostream& operator<<(ostream &os, const Pair& h){
    return os << "("<<h.first << ","<<h.second<<")"<<endl;
}

int main(){
    Pair u(1, 2);
    Pair v(3, 4);
    Complex c(4, 6);
    cout << v;
    u.show();
    c.show();
    //Complex c(5, 8);
    //cout<<c;
    cout<<u-v;
    cout<<u*v;
    cout<<u+v;
}

