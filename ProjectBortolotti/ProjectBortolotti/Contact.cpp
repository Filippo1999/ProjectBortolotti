#include "Contact.h"
#include <iostream>
using namespace std;

Contact::Contact()
{
	_name = "Mario";
	_surname = "Rossi";
}

Contact::Contact(string name, string surname)
{
	_name = name;
	_surname = surname;
}

void Contact::setName(string name)
{
	_name = name;
}

void Contact::setSurname(string surname)
{
	_surname = surname;
}

void Contact::setAge(int age)
{
	_age = age;
}

string Contact::getName()
{
	return _name;
}

string Contact::getSurname()
{
	return _surname;
}

int Contact::getAge() 
{
	return _age;
}