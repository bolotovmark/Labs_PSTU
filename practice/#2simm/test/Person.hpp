
#include <string>
#include <ostream>
#include <istream>
#include <iostream>

using std::string;
using std::istream;
using std::ostream;
using std::cout;
using std::endl;
using std::cerr;

#ifndef _Person_hpp_
#define _Person_hpp_




class Person
{
protected:
	string name;
	int age;
public:

	Person() { this->name = ""; this->age = 0; }

	Person(const int& age, const string& name) { this->set_age(age); this->set_name(name); };

	Person(const string& name, const int& age) : Person(age, name) {};

	Person(const Person& p) { this->name = p.name; this->age = p.age; };

    void set_name(const string& name) { this->name = name; };

    void set_age(const int& age)
	{
		if (age < 0)
		{
			cerr << "Invalid age: " << age << endl;
			exit(3);
		};
		this->age = age;
	}
	int get_age() const { return this->age; };

	string get_name() const { return this->name; };

	Person& operator=(const Person& p)
	{
		this->name = p.name;
		this->age = p.age;
		return *this;
	};

	friend ostream& operator<<(ostream& stream, const Person& p)
	{
		stream << "Name : " << p.name << endl;
		stream << "Age : " << p.age;
		return stream;
	};

	friend istream& operator>>(istream& stream, Person& p)
	{
		string tmp;
		int a;

		cout << "Name : ";
		stream >> tmp;
		p.set_name(tmp);

		cout << "Age : ";
		stream >> a;
		p.set_age(a);


		cout << endl;

		return stream;
	};

    virtual void show()=0;

};





#endif

