#pragma once
#include "Number.h"
#include "jobNumber.h"

class whatsappNumber : public Number, public jobNumber
{

protected:
	string _wNumber;
public:
	whatsappNumber();
	whatsappNumber(string name, string surname, int age, string pNumber, string wNumber);
	whatsappNumber(string name, string surname, string pNumber, string wNumber, int age);
	whatsappNumber(string name, string surname, int age, string pNumber, string wNumber, string jobPNumber);

	void numberType() override {
		cout << "Whatsapp phone number" << endl;
	}

};
