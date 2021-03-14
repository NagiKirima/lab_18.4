#include <iostream>
#include "Person.h"
#include "Student.h"
using namespace std;
int main() 
{
	setlocale(LC_ALL, "rus");
	Person A("Василий", 35);
	Person B(A);
	A.Show(); B.Show();
	cout << "========================\n";
	Student C (A, "Английский", 2);
	C.Show();
	C.All_info();
	cout << "========================\n";
	Person Noname; Student None("123",123,"123", 5);
	Noname.Show();
	Noname = B;
	Noname.Show();
	cout << "========================\n";
	Noname = None;
	Noname.Show();
	cout << "========================\n";
	None.All_info();
	None = A;
	None.All_info();
	cout << "========================\n";
	cout << "Перегрузка << и >>" << endl;
	cout << ">>" << endl;
	Person p;
	cin >> p;
	cout << "<<" << endl;
	cout << p;
	cout << "Поля объекта p:\n";
	p.Show();
}