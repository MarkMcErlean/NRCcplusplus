// secondProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h"
#include <iostream>
#include <cmath>

using namespace std;



int main()
{
	float a; // creates the value a
	float b; // creates the value b
	float c; // creates the value c
	float power = 2.0; // creates and defines the power value

	cout << "Please enter a value for a: "; // user interface to get value for "a"
	cin >> a;  // user input to get value for "a"
	cout << "Please enter a value for b: "; // user interface to request value for "b"
	cin >> b; // user input to get value for "b"
	cout << "a is equal to " << a << endl; // user interface to display value for "a"
	cout << "b is equal to " << b << endl; // user interface to display value for "b"


	float aSqr = pow(a, power); // this multiplies "a" by the variable "power" to get a squared
	float bSqr = pow(b, power); // this multiplies "b" by the variable "power" to get b squared

	//cout << "a squared is equal to " << aSqr << endl; // this will print a line to show "a" squared
	//cout << "b squared is equal to " << bSqr << endl; // this will print a line to show "b" squared

	float cSqr = aSqr + bSqr; // this will find c squared by adding a squared and b squared

	//cout << "c squared is equal to " << cSqr << endl; // this will print a line to explain c squared

	c = sqrt(cSqr);

	cout << "c is equal to " << c << endl;


	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
