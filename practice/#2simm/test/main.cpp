#include <iostream>
#include <string>
#include <Person.hpp>
#include <Student.hpp>

using namespace std;



//Person - 40B
//Student - 80B

template <class T>
int CountAgeGreater(T* persons, int count,int age)
{
	int counter = 0;
	for (int i = 0; i < count; i++)
	{
		if ((persons + i)->get_age() > age)
		{
			counter++;
		}
	}
	return counter;
};

void HelloHuman(const Person& p)
{
	cout << "Hello, " << p.get_name() << endl;
}


Person* SetPerson(Person& p,string name, int age)
{
	p.set_name(name);
	p.set_age(age);
	return &p;
}


Person* persons;
Student* students;
int age;
int main()
{

	int N;
	std::cout << "Input amount of persons: ";
	std::cin >> N;

	persons = new Person[N];


	for (int i = 0; i < N; i++)
	{
		cin >> persons[i];

	};

	cout << "Input age: ";

	cin >> age;

	cout << "Count of persons, age is greater than given: " << CountAgeGreater(persons,N,age) << endl;
	delete[] persons;




	std::cout << "Input amount of sudents: ";
	std::cin >> N;
	students = new Student[N];
	for (int i = 0; i < N; i++)
	{
		cin >> students[i];
	};

	cout << "Input age: ";
	cin >> age;
	cout << "Count of students, age is greater than given: " << CountAgeGreater(students,N,age) << endl;
	delete[] students;



	string name;
	string sub;
	int mark;
	cout << "Enter name: ";
	cin >> name;
	cout << "Enter age: ";
	cin >> age;
	cout << "Enter subject : ";
	cin >> sub;
	cout << "Enter mark : ";
	cin >> mark;
	Student p;


	p.set_subject(sub);
	p.set_mark(mark);;

	Person* person_p = new Person(*SetPerson(p,name,age));
	person_p->set_age(person_p->get_age() + 1);

	cout << "Student: " <<endl << p << endl;
	cout << "Same person (age += 1): " <<endl << *person_p << endl;
	delete person_p;
	HelloHuman(p);

    p.show();
	return 0;
}
