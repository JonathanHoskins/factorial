/*
This is a program for finding the factorial of a non-negative integer
Made by Jonathan Hoskins
Reference material - http://www.mycoding.net/2011/02/c-program-to-find-the-factorial-of-a-number/
*/

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <istream>

using namespace std;
int input;
//Adding "long long" in front of int factorialNumber to allow for 20!.
long long int factorialNumber = 1;

//Method for finding the factorial of a number
int Factorial(int input)
{
//For loop runs until it reaches the number of cycles equal to input
//While running, the loop multiplies the factorialNumber by i, then assigns the value to itself(factorialNumber)
//When the loop reaches the end, it returns the desired factorial
for(int i = 1; i <= input; i++)
	factorialNumber *= i;
	cout << "The factorial of " << input << " is: ";
	return factorialNumber;
}

int main()
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
	//I put this in so that I could output the numbers to a file for easy checking.
	//I did this because20! was giving me a negative number.
	//I had to add "long long" in front of int factorialNumber when I declared it.
	ofstream myfile;
	myfile.open ("outputFromFactorial.txt");
	myfile << "Input Number: " << input << "\n" << "Factorial Number: " << factorialNumber << "\n";
	myfile.close();

return 0;
}
