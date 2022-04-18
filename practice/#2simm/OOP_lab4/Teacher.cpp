#include <iostream>
#include "Teacher.h"
using namespace std;

void Teacher::set_hours(const int &hours) {
    if (hours < 0) {
        cerr << "Invalid hours" << hours << endl;
        exit(3);
    }
    this -> hours = hours;
}

void Teacher::set_subject(const string &sub) {
    this -> subject = sub;
}

int Teacher::get_hours() {
    return this -> hours;
}

string Teacher::get_subject() {
    return this -> subject;
}

Teacher& Teacher::operator=(Teacher &p) {
    this -> name = p.name;
    this -> age = p.age;
    this -> subject = p.subject;
    this -> hours = p.hours;
}

ostream& operator << (std::ostream& stream, const Teacher& p) {
    const Person* p_p = &p;
    stream << *p_p;
    stream << "Subject : " << p.subject << endl;
    stream << "Mark : " << p.hours;
    return stream;
}

istream& operator>>(istream& stream, Teacher& p) {
    string tmp;
    int m;

    Person* p_p = &p;
    stream >> *p_p;

    cout << "Subject : ";
    stream >> tmp;
    p.set_subject(tmp);

    cout << "Hours : ";
    stream >> m;
    p.set_hours(m);

    cout << endl;
    return stream;
}

void Teacher::operator+(const int d) {
    this -> hours += d;
}

//void Teacher::operator+(const int& x, Teacher&p) {
//    p + x;
//}


#include "Teacher.h"
