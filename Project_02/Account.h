#pragma once
/**
* Author: Westley Case & Morgan Allred
* Assignment: Project 2
* File: Account.cpp
* Instructor: Dr. DeBry
* Class: CS1410-001
* Date Written:------------ ADD CORREECT DATE -----------------
* Description: This program allows the users to deposite and withdraw form account balance
*
*/

#include <string>
using namespace std;


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
	Person getPerson() const;

	// mutators
	void makeDeposit(double _deposit);
	
	void makeWithdrawl(double _withdrawl);

private:
	int accNumber;
	double accBalance;
	Person human;
};
