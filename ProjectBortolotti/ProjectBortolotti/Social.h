#pragma once
#include "Contact.h"
class Social : public Contact
{
protected:
	string _social;
	string _nickname;
	string _password;

	virtual void changePassword() = 0;
	virtual void changeNickname() = 0;
	virtual void

public:
	Social();
};

