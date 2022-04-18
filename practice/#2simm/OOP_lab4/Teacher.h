#include "people.h"
using namespace std;
#ifndef UNTITLED1_TEACHER_H
#define UNTITLED1_TEACHER_H


class Teacher : public Person  {
protected:
    string subject;
    int hours;
public:
    Teacher() {
        this -> subject = "";
        this -> hours = 0;
    }
    Teacher(const string& name, const int& age, const string& sub, const int& hours) : Person(age, name)
    {
        this->set_hours(hours);
        this->set_subject(sub);
    };
    Teacher(const int& age, const string& name, const string& sub, const int& hours) : Teacher(name, age, sub, hours) {};

    void set_hours(const int& hours);
    void set_subject(const string& sub);

    int get_hours();
    string get_subject();

    Teacher& operator=(Teacher& p);

    friend ostream& operator<<(ostream& stream, const Teacher& s);

    friend istream& operator>>(istream& stream, Teacher& s);

    void operator + (int d);
//    void operator + (const int& x, Teacher&p);
};


#endif
