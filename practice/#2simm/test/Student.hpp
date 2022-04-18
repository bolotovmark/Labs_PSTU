#include <string>
#include <ostream>
#include <istream>
#include <iostream>


using std::cerr;
using std::string;
using std::cout;
using std::endl;
using std::istream;
using std::ostream;
using std::cin;

#ifndef _STUDENT_HPP_
#define _STUDENT_HPP_


class Student : public Person
{
protected:
	int mark;
	string subject;
public:


	Student() { this->mark = 0; this->subject = ""; };

	Student(const string& name, const int& age, const string& sub, const int& mark) : Person(age, name)
	{
		this->set_mark(mark);
		this->set_subject(sub);
	};
	Student(const int& age, const string& name, const string& sub, const int& mark) : Student(name, age, sub, mark) {};

	void set_mark(const int& mark)
	{
		if (mark <= 0 || mark >= 6)
		{
			cerr << "Invalid mark" << endl;
			exit(3);
		}
		this->mark = mark;
	}
	void set_subject(const string& sub) { this->subject = sub; };

	int get_mark() const { return this->mark; };

	string get_subject() const { return this->subject; };



	Student& operator=(Student& p)
	{
		this->name = p.name;
		this->age = p.age;
		this->subject = p.subject;
		this->mark = p.mark;
		return *this;
	};

	friend ostream& operator<<(ostream& stream, const Student& s)
	{
		//Создаем указатель на константную родительскую часть студента(человек)
		const Person* p_s = &s;
		//Для работы со человеком(Person) оператор уже перегружен 
		stream << *p_s << endl;
		
		//Остается только вывести предмет и оценку
		stream << "Subject : " << s.subject << endl;
		stream << "Mark : " << s.mark;
		return stream;
	};

	friend istream& operator>>(istream& stream, Student& s)
	{
		/*
			Пользуемся модификаторами,
			чтобы установить полям валидные значения
		*/
		std::string tmp;
		int m;

		Person* p_s = &s;
		stream >> *p_s;

		cout << "Subject : ";
		stream >> tmp;
		s.set_subject(tmp);

		cout << "Mark : ";
		stream >> m;
		s.set_mark(m);

		cout << endl;
		return stream;
	}

    void show(){
        cout<<name<<" "<<age<<" "<<mark<<" "<<subject<<endl;
    }
};



#endif



