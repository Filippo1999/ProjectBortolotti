#include "Number.h"
#include <iostream>
using namespace std;


Number::Number()
{
	_name = "Mario";
	_surname = "Rossi";
	_age = 18;
	_phoneNumber = "+393401111111";
}

Number::Number(string name, string surname, int age, string pNumber)
{
	_name = name;
	_surname = surname;
	_age = age;
	_phoneNumber = pNumber;
}

void Number::setPNumber(string pNumber)
{
	_phoneNumber = pNumber;
}

string Number::getPNumber()
{
	return _phoneNumber;
}