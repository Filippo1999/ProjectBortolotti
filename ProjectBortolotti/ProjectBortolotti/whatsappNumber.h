#include <iostream>
using namespace std;
#include "Contact.h"
class whatsappNumber : public Contact
{
protected:

	string _phoneNumber;

public:
	whatsappNumber();
	whatsappNumber(string name, string surname, string pNumber);

};

