#include <iostream>
using namespace std;

class Contact
{
protected:

	string _name, _surname;

public:

	Contact();
	Contact(string name, string surname);

	void setName(string name);
	void setSurname(string surname);
	string getName();
	string getSurname();
};

