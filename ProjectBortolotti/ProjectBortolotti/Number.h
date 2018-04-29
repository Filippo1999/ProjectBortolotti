#pragma once
#include "Contact.h"

class Number : public Contact
{
protected:

	string _phoneNumber;

public:
	Number();
	Number(string name, string surname, int age, string pNumber);
	void setPNumber(string pNumber);
	string getPNumber();
	void contactType() override {
		cout << "Private phone number" << endl;
	}
};

