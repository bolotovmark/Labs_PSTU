//
// Created by Cake on 26.04.2022.
//
#include <iostream>
#include <list>
#include <algorithm>


using namespace std;


class Pair {
private:
    int first;
    double second;
public:
    Pair() {
        this->first = 0;
        this->second = 0;
    }
    Pair(int first, double second) {
        this->first = first;
        this->second = second;
    }
    void set(double first, double second) {
        this->first = first;
        this->second = second;
    }
    int get_f(){
        return first;
    }
    double get_s(){
        return second;
    }
    void show() {
        cout << "Введено ==> first: " << first;
        cout << " second: " << second << endl;
    }
    friend ostream& operator<<(ostream& os, const Pair& d) {
        return os <<"( " << d.first << " : " << d.second<<" )";
    }

    Pair operator-(const Pair &P) {
        cout << "Вычитание " << *this << " и " << P << endl;
        this->first = this->first - P.first;
        this->second = this->second - P.second;
        cout <<  "Получилось" << *this << endl;
        return *this ;
    }

    Pair operator+(const int& dig) {
        cout << "Сложение " << *this << " и " << dig << endl;
        this->first = this->first + dig;
        cout << "Получилось" << *this << endl;
        return *this;
    }

    Pair operator+(const double& dig) {
        cout << "Сложение " << *this << " и " << dig << endl;
        this->second = this->second - dig;
        cout << "Получилось" << *this << endl;
        return *this;
    }
    void operator+=(Pair& temp){
        this->first = temp.first+this->first;
        this->second = temp.second+ this->second;
    }

    void random(){
        first = rand() % 10;
        second = rand() % 10;
    }
};


ostream& operator<<(ostream& stream, list<Pair>& l){
    for_each(l.begin(), l.end(), [](Pair& k){cout<<k<<" ";});
}
int main(){
    srand(time(NULL));
    list<Pair> v(3);
    list<Pair>::iterator first = v.begin();
    list<Pair>::iterator last = v.end();

    generate(first, last, [](){
        Pair p;
        p.random();
        return p;
    });
    cout<<v;

    Pair sum;
    for_each(first, last, [&sum](Pair& p) {sum+=p;});
    cout<<endl<<sum;
    sum.set((sum.get_f()/v.size()), (sum.get_s()/v.size()));
    v.push_back(sum);
    cout<<endl<<v;

    cout<<endl;

    Pair max(0, 0);
    for_each(first, last, [&max](Pair& p){
        if(((double)p.get_f() + p.get_s()) > ((double)max.get_f() + max.get_s())){
            max.set(p.get_f(), p.get_s());
        }
    });
    cout<<endl<<max;

    Pair min;
    min+=max;
    for_each(first, last, [&min](Pair& p){
        if(((double)p.get_f() + p.get_s()) < ((double)min.get_f() + min.get_s())){
            min.set(p.get_f(), p.get_s());
        }
    });
    cout<<endl<<min;

    for_each(first, last, [&max, &min](Pair& p){
        p+=max;
        p+=min;
    });
    cout<<endl<<v;
}


