#ifndef UNTITLED1_PEOPLE_H
#define UNTITLED1_PEOPLE_H
#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person() {
        this -> name = "Unnamed ";
        this -> age = 0;
    }
    Person(const int& age, const string& name) {
        this -> set_age(age);
        this -> set_name(name);
    }
    Person(const string& name, const int& age) : Person(age,name) {}

    Person(const Person& p) {
        this -> name = p.name;
        this -> age = p.age;
    }

    void set_age(const int& age);
    void set_name (const string& name);
    int get_age();
    string get_name();

    Person& operator=(const Person&p);
    friend ostream& operator<<(ostream& stream, const Person& p);
    friend istream& operator>>(istream& stream, Person& p);

};


#endif //UNTITLED1_PEOPLE_H
