/*
This is a program for finding the factorial of a non-negative integer
Made by Jonathan Hoskins
Reference material - http://www.go4expert.com/forums/showthread.php?t=16145
*/

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <istream>

using namespace std;
long input;
long factorialNumber = 1;

//Method for finding the factorial of a number
long Factorial(long input)
{
	//For loop runs until it reaches the number of cycles equal to input
	//While running, the loop multiplies the factorialNumber by i, then assigns the value to itself(factorialNumber)
	//When the loop reaches the end, it returns the desired factorial
	for(int i = 1; i <= input; i++)
		factorialNumber = factorialNumber * i;
		cout << "The factorial of " << input << " is: ";
		return factorialNumber;
}

long main()
{
	cout << "Please input a number to find its factorial: ";
	cin >> input;
	//This instance makes sure that the user inputs a positive integer number
	if(input < 0){
		cout << "You entered a negative number!\n";
	}
	//If the user enters a negative number, this is printed out	
	else{
		Factorial(input);
		cout << factorialNumber << "\n";
	}
	
	return 0;
}

