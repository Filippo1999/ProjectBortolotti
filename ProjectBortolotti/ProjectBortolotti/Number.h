#include <iostream>
using namespace std;
#include "Contact.h"
class Number : public Contact
{
protected:

	string _phoneNumber;

public:
	Number();
	Number(string name, string surname, string pNumber);
	void setPNumber(string pNumber);
	string getPNumber();
};

