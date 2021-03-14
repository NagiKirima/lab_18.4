#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;
Person::Person() { name = "noname"; age = 0; }
Person::Person(string name, int age) { this->name = name; this->age = age; }
Person::Person(const Person& p) { name = p.name; age = p.age; }
void Person::Set_name(string name) { this->name = name; }
void Person::Set_age(int age) { this->age = age; }
string Person::Get_name() { return name; }
int Person::Get_age() { return age; }
void Person::Show() 
{
	cout << "Name:\t" << name << endl;
	cout << "Age:\t" << age << endl;
}
// overloads
Person& Person::operator=(Person &p) 
{
	if (this == &p) 
		return *this;
	name = p.name;
	age = p.age;
	return *this;
} // = overload
istream& operator >> (istream& cin, Person& p) 
{
	cout << "¬ведите им€:\t";
	cin >> p.name;
	cout << "¬ведите возраст:\t";
	cin >> p.age;
	return cin;
}
ostream& operator << (ostream& cout, Person& p) 
{
	return (cout << "Name:\t" << p.name << endl << "Age:\t" << p.age << endl);
}
