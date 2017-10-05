/*

Breanna Gateley and Zach Bates - Date Period

Assignment Name : 3 Digit Ascend and Descence

Will enter a 3 digit number and will print as either ascend or descend or neither

*/

// Libraries

#include <iostream> // gives access to cin, cout, endl, <<, >>, boolalpha, noboolalpha

#include <conio.h> // gives access to _kbhit() and _getch() for pause()

// Namespaces

using namespace std;

// Functions()

void pause() {

	cout << "Press any key to continue . . .";

	while (!_kbhit());

	_getch();

	cout << '\n';
}

// MAIN

void main() {
	//int c; //last digit  test lololololololol
	//int b; //second digit
	//int a; //first digit
	int number; //inputted 3 digit number
	

	cout << "Input a positive 3 digit number. ";
	cin >> number;

	int c = (number % 10);
	int b = (number / 10) % 10;
	int a = (number / 100);
	



	if (a > b && b > c) {
		cout << "Descending \n";
	}
	else if (a < b && b < c) {
		cout << "Ascending \n";
	}
	else {
		cout << "Neither \n";
	}


	pause(); // pauses to see the displayed text
}