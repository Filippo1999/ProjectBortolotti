#include "whatsappNumber.h"

whatsappNumber::whatsappNumber()
{
	Number::_name = "Mario";
	Number::_surname = "Rossi";
	Number::_age = 18;
	Number::_phoneNumber = "+393401111111";
	jobNumber::_phoneNumber = "+393401111111";
	_wNumber = "+393401111111";
}

whatsappNumber::whatsappNumber(string name, string surname, int age, string pNumber, string wNumber)
{
	Number::_name = name;
	Number::_surname = surname;
	Number::_age = age;
	Number::_phoneNumber = pNumber;
	_wNumber = wNumber;
}

whatsappNumber::whatsappNumber(string name, string surname, string pNumber, string wNumber, int age)
{
	jobNumber::_name = name;
	jobNumber::_surname = surname;
	jobNumber::_age = age;
	jobNumber::_phoneNumber = pNumber;
	_wNumber = wNumber;
}

whatsappNumber::whatsappNumber(string name, string surname, int age, string pNumber, string wNumber, string jobPNumber)
{
	Number::_name = name;
	Number::_surname = surname;
	Number::_age = age;
	Number::_phoneNumber = pNumber;
	jobNumber::_phoneNumber = jobPNumber;
	_wNumber = wNumber;
}