#pragma once
#include <iostream>
using namespace std;

class Contact
{
protected:

	string _name, _surname;
	int _age;

public:

	Contact();
	Contact(string name, string surname);

	void setName(string name);
	void setSurname(string surname);
	void setAge(int age);
	string getName();
	string getSurname();
	int getAge();

	virtual void contactType() = 0;
};

