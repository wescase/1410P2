/**
* Author: Westley Case & Morgan Allred
* Assignment: Project 2
* File: Account.cpp
* Instructor: Dr. DeBry
* Class: CS1410-001
* Date Written: January 22, 2014
* Description: This program allows the users to deposite and withdraw form account balance
*
*/

#include "Account.h"

// --------------- Account Class Methods -------------------
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

void Account::makeDeposit(double _deposit)
{

	accBalance += _deposit;
}

void Account::makeWithdrawl(double _withdrawl)
{
	accBalance -= _withdrawl;
}

// ----------------- Person Class Methods ----------------------
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
