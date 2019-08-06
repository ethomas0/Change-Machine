/*
Name: Ethan J Thomas
Class : CS 131 (MTWTH) Section A
Description: This program will tell you the minimum amount of coins in 
change you will revceive.
*/

#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
	
	int arr[] = { 25, 10, 5, 1 };
	int amount = 0;
	int change = 0;

	cout << "Enter the amount of change due (As a whole number): ";
	cin >> change;

	system("CLS");

	cout << "The amount due is: " << endl;
	cout << "Quarters Dimes Nickels Pennies" << endl;
	
	for (int i = 0; i <= 3; ++i)
	{
		amount = change / arr[i];
		cout << setw(6)<< amount << " ";
		change %= arr[i];

	} 
	cout << endl;	
	system("pause");
    return 0;
}

//Output:
//
//Enter the amount of change due (As a whole number): 8
//The amount due is:
//Quarters Dimes Nickels Pennies
//   0      0      1      3

//Enter the amount of change due(As a whole number) : 42
//The amount due is :
//Quarters Dimes Nickels Pennies
//   1      1      1      2

//Enter the amount of change due(As a whole number) : 99
//The amount due is :
//Quarters Dimes Nickels Pennies
//   3      2      0      4

