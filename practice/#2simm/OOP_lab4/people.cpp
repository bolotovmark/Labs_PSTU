#include <iostream>;
#include "people.h"
using namespace std;

void Person::set_age(const int& age) {
    if (age < 0) {
        cerr << "Invalid age: " << age << endl;
        exit(3);
    };
    this -> age = age;
}

void Person::set_name(const string& name) {
    this -> name = name;
}

int Person::get_age(){
    return this -> age;
}

string Person::get_name(){
    return this -> name;
}

Person& Person:: operator=(const Person& p)
{
    this->name = p.name;
    this->age = p.age;
    return *this;
};

ostream& operator << (std::ostream& stream, const Person& p) {
    stream << "Name: " << p.name << endl;
    stream << "Age: " << p.age;
    return stream;
}

istream& operator>>(istream& stream, Person& p) {
    string tmp;
    int a;

    cout << "Name: ";
    stream >> tmp;
    p.set_name(tmp);

    cout << "Age: ";
    stream >> a;
    p.set_age(a);

    cout << endl;
    return stream;
}

