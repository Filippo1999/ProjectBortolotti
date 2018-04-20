#include "Number.h"
#include <iostream>
using namespace std;


Number::Number()
{
	_name = "Mario";
	_surname = "Rossi";
	_phoneNumber = "+393401111111";
}

Number::Number(string name, string surname, string pNumber)
{
	_name = name;
	_surname = surname;
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