#pragma once
#include <iostream>
#include "Person.h"
using namespace std;
class Student: public Person 
{
	string object;
	int mark;
public:
	//constructors
	Student() :Person(), object("none"), mark(0){};
	Student(string obj, int markk) : Person(), object(obj), mark(markk) {}
	Student(string name, int age, string obj, int markk): Person(name,age), object(obj), mark(markk) {}
	Student(string obj) : Person(), object(obj), mark(0) {}
	Student(int markk) : Person(), mark(markk) {}
	Student(Person p, string obj, int markk) : Person(p), object(obj), mark(markk) {}
	
	//Getters and setters
	void Set_mark(int mark) { this->mark = mark; };
	void Set_object(string object) { this->object = object; };
	int Get_mark() { return mark; }
	string Get_object() { return object; }

	//methods
	void All_info() 
	{
		this->Show();
		cout << "Object:\t" << object << endl;
		cout << "Mark:\t" << mark << endl;
	}

	//destructor
	~Student() {}

	//overloads
	Student& operator=(Person& p) 
	{ 
		this->Set_name(p.Get_name());
		this->Set_age(p.Get_age()); 
		return *this;
	}
};