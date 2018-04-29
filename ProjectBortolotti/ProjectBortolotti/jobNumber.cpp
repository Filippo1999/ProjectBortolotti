#include "jobNumber.h"


jobNumber::jobNumber()
{
	_name = "Mario";
	_surname = "Rossi";
	_age = 18;
	_phoneNumber = "+393401111111";
}

jobNumber::jobNumber(string name, string surname, int age, string pNumber)
{
	_name = name;
	_surname = surname;
	_age = age;
	_phoneNumber = pNumber;
}

void jobNumber::setPNumber(string pNumber)
{
	_phoneNumber = pNumber;
}

string jobNumber::getPNumber()
{
	return _phoneNumber;
}
