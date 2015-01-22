#pragma once
/*
* File Prolog
///////////////////////
*/

#include <iostream>
#include <string>
using namespace std;

class Account
{
public:

	//default constructor
	//Purpose: Initialize data members for object
	//Parameters: none
	//Returns: none
	Account();

	// parameterized constructor
	// Purpose: initalize the data members for object
	// Parameters: Person object, double balance, int account number
	// Returns: none
	Account(const Person& _human, double _accBalance, int _accNumber);

	// getAccountNumber()
	// Purpose: get the account number
	// Parameters: none
	// Returns: int the account number
	int getAccountNumber() const;

	// getAccountBalance()
	// Purpose: get the account balance
	// Parameters: none
	// Return: none
	double getAccountBalance() const;

	// getPerson()
	// Purpose: retrieve the person object associated to the account
	// Parameters: none
	// Returns: this is a test
	Account::Person getPerson() const;

	double makeDeposit(double _deposit);
	double makeWithdrawl(double _withdrawl);

private:
	int accNumber;
	double accBalance;
	Person human;
};

class Person
{
public:
	Person();
	Person(string _name, string _address);

	string getName() const;
	string getAddress() const;

private:
	string name;
	string address;
};

