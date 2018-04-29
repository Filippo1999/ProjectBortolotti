#include "jobNumber.h"


jobNumber::jobNumber()
{
	_name = "Mario";
	_surname = "Rossi";
	_phoneNumber = "+393401111111";
}

jobNumber::jobNumber(string name, string surname, string pNumber)
{
	_name = name;
	_surname = surname;
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