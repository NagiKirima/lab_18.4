#pragma once
#include <iostream>
using namespace std;
class Person 
{
	string name;
	int age;
public:
	//constructors
	Person();
	Person(string name, int age);
	Person(const Person& p);
	//destructors
	~Person() {}
	// Getters and Setters
	void Set_name(string name);
	void Set_age(int age);
	string Get_name();
	int Get_age();
	//methods
	void Show();
	//overloads
	Person& operator=(Person &p);
	friend istream& operator >> (istream& cin, Person& p);
	friend ostream& operator << (ostream& cout, Person& p);
};
