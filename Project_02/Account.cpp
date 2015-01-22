//file prologue

#include "Account.h"


Account::Account()
{
	accBalance = 0.00;
	accNumber = 0;
}

Account::Account(const Person& _human, double _accBalance, int _accNumber)
{
	human = _human;
	accBalance = _accBalance;
	accNumber = _accNumber;
}

int Account::getAccountNumber() const
{
	return accNumber;
}

double Account::getAccountBalance() const
{
	return accBalance;
}

Person Account::getPerson() const
{
	return human;
}

Person::Person()
{
	name = "";
	address = "";
}

Person::Person(string _name, string _address)
{
	name = _name;
	address = _address;
}

string Person::getName() const
{
	return name;
}

string Person::getAddress() const
{
	return address;
}




