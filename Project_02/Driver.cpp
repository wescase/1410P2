/**
* Author: Westley Case & Morgan Allred
* Assignment: Project 2
* File: Driver.cpp
* Instructor: Dr. DeBry
* Class: CS1410-001
* Date Written: January 22, 2014
* Description: This program allows the users to deposite and withdraw form account balance
*
*/

#include "Driver.h"

int main()
{
	vector<Account> accVector;

	// Create three person objects.You can use the names and addresses shown in the example output, or use your imagination to come up with something interesting.
	Person p1("Margan A.", "1234 Street");
	Person p2("Wes C.", "4321 Cir.");
	Person p3("Homer Simpson", "5748 Springfield");
	// Create three Account objects, where each account object contains one of your Person objects.Initialize the balance in the first account object to $500.00, the balance in the second to $1000.00, and the balance in the third to $1200.00.
	Account a1(p1, 500.00, 1);
	Account a2(p2, 1000.00, 2);
	Account a3(p3, 1200.00, 3);

	// Push these Account objects into the vector.
	accVector.push_back(a1);
	accVector.push_back(a2);
	accVector.push_back(a3);
	// Using a for loop, add $25.00 to each account.
	for (unsigned i = 0; i < accVector.size(); i++)
	{
		accVector[i].makeDeposit(25.00);
	}
	// Using a second for loop, withdraw $100.00 from each account.
	for (unsigned i = 0; i < accVector.size(); i++)
	{
		accVector[i].makeWithdrawl(100.00);
	}
	// Finally, pass the vector to your displayAccounts function to display the account information for each Account object in th*/e vector.
	displayAccounts(accVector);

	return 0;
}

void displayAccounts(const vector<Account>& _aVector)
{
	cout << "National Bank\n" << endl;
	cout << "Account\tAccount" << endl;
	cout << "Number\tName\tAddress\tBalance" << endl;
	for (unsigned i = 0; i < _aVector.size(); i++)
	{
		cout << _aVector[i].getAccountNumber() << "\t" << _aVector[i].getPerson().getName() << "\t" << _aVector[i].getPerson().getAddress() << "\t" << _aVector[i].getAccountBalance() << endl;
	}
}