/**
* Author: Westley Case & Morgan Allred
* Assignment: Project 2
* File: Driver.h
* Instructor: Dr. DeBry
* Class: CS1410-001
* Date Written: January 22, 2014
* Description: This program allows the users to deposite and withdraw form account balance
*
*/
#include<iostream>
#include<string>
#include<vector>
#include "Account.h"

//-------------------Constant Variables-------------------
const int ACC_1 = 1;
const int ACC_2 = 2;
const int ACC_3 = 3;

const double DEPOSIT = 25.00;
const double WITHDRAW = 100.00;

const double INIT_1 = 500.00;
const double INIT_2 = 1000.00;
const double INIT_3 = 1200.00;

//-------------------Constant Variables-------------------


// displayAccounts
// Purpose: to display the account info to the user in console
// Parameters: vector, of Accounts
// Returns: none
void displayAccounts(const vector<Account>&);

