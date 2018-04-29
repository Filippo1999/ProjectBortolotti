#pragma once
#include "Contact.h"
class jobNumber : public Contact
{
protected:

	string _phoneNumber;

public:
	jobNumber();
	jobNumber(string name, string surname, int age, string pNumber);
	void setPNumber(string pNumber);
	string getPNumber();

	void numberType() override {
		cout << "Job phone number" << endl;
	}

};

