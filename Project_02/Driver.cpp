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
	// Create vector for accounts
	vector<Account> accVector;

	// Create three person objects.You can use the names and addresses shown in the example output, or use your imagination to come up with something interesting.
	Person p1("Morgan A.", "1234 Street");
	Person p2("Westley C.", "4321 Cir.");
	Person p3("Homer Simpson", "5748 Spring");
	// Create three Account objects, where each account object contains one of your Person objects.Initialize the balance in the first account object to $500.00, the balance in the second to $1000.00, and the balance in the third to $1200.00.
	Account a1(p1, INIT_1, ACC_1);
	Account a2(p2, INIT_2, ACC_2);
	Account a3(p3, INIT_3, ACC_3);

	// Push these Account objects into the vector.
	accVector.push_back(a1);
	accVector.push_back(a2);
	accVector.push_back(a3);
	// Using a for loop, add $25.00 to each account.
	for (unsigned i = 0; i < accVector.size(); i++)
	{
		accVector[i].makeDeposit(DEPOSIT);
	}
	// Using a second for loop, withdraw $100.00 from each account.
	for (unsigned i = 0; i < accVector.size(); i++)
	{
		accVector[i].makeWithdrawl(WITHDRAW);
	}
	// Finally, pass the vector to your displayAccounts function to display the account information for each Account object in th*/e vector.
	displayAccounts(accVector);

	cout << endl;
	system("Pause");
	return 0;

}

void displayAccounts(const vector<Account>& _aVector)
{
	// Console out text
	cout << "National Bank\n" << endl;
	cout << "Account\tAccount" << endl;
	cout << "Number\tName\t\t\tAddress\t\t\tBalance\n" << endl;
	// Loop through the vector to get account info to display
	for (unsigned i = 0; i < _aVector.size(); i++)
	{
		cout.setf(ios::fixed);
		cout.precision(2);
		cout << _aVector[i].getAccountNumber() << "\t" << _aVector[i].getPerson().getName() << "\t\t" << _aVector[i].getPerson().getAddress() << "\t\t$" << _aVector[i].getAccountBalance() << endl;
	}
}

