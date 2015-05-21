#include "Functions.h"
#include "OtherFunctions.h" 
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

void ex02() {
	// ex01_02_a
	bool hasPassedTest = true;

	// ex01_02_b
	int x = rand() % 100, y = rand() % 100;
	cout << "x is " << x << " and y is " << y << endl;
	if (x >= y) {
		cout << "x is greater than or equal to y\n";
	}
	else {
		cout << "x is less than y\n";
	}

	// ex01_02_c
	int numberOfShares;
	cout << "How many shares are there? ";
	cin >> numberOfShares;
	if (numberOfShares < 100) {
		cout << "The number of shares is less than 100\n";
	}
	else {
		cout << "The number of shares is greater than or equal to 100\n";
	}

	// ex01_02_d
	int boxWidth, boxHeight;
	cout << "What is the box width? ";
	cin >> boxWidth;
	cout << "What is the box height? ";
	cin >> boxHeight;
	if (boxWidth % boxHeight == 0) {
		cout << "The box width is divisible by the box height\n";
	}
	else if (boxHeight % boxWidth == 0) {
		cout << "The box height is divisible by the box width\n";
	}

	// ex01_02_e
	int shelfLife, Temp;
	cout << "What is the shelf life of this box of Chocolate? ";
	cin >> shelfLife;
	cout << "What is the temperature outside? ";
	cin >> Temp;
	if (Temp > 90) {
		shelfLife -= 4;
		cout << "The shelf life for the box of Chocolate is " << shelfLife << endl;
	}

}

void ex03() {

	// ex01_03_a
	double squareArea, length, diagonal;
	cout << "What is the area for the square? ";
	cin >> squareArea;
	length = sqrt(squareArea);
	diagonal = sqrt(2) * length;
	cout << "The length of one side is " << length << " and the length of the diagonal is " << diagonal << endl;
	
	// ex01_03_b
	char response;
	cout << "Is it cold today (y or n)? ";
	cin >> response;
	if (tolower(response) == 'y') {
		cout << "Yes\n";
	}
	else if (tolower(response) == 'n') {
		cout << "No\n";
	}

	// ex01_03_c
	char tab = '/t';

	// ex01_03_d
	string mailingAddress;
	cout << "What is your mailing address? ";
	cin.ignore();
	getline(cin, mailingAddress);

	// ex01_03_e
	string empty = "";

}

void ex04() {

	//ex01_04_a
	int number;
	cout << "Give me a number between 1 and 10: ";
	cin >> number;
	while (number < 1 || number > 10) {
		cout << "That's an invalid choice\nGive me a number between 1 and 10: ";
		cin >> number;
	}

	//ex01_04_b
	int cube = 0;
	for (int k = 1; k <= number; k++) {
		cube += pow(k, 3);
	}
	cout << "The sum of the cubes is " << cube << endl;

	//ex01_04_c
	int asterisk = number;
	do {
		cout << "*";
		asterisk--;
	} while (asterisk > 0);
	cout << endl;

	//ex01_04_d
	for (int i = 0; i <= 40; i++){
		if (i % 2 == 0) {
			cout << i << " ";
		}
	}
	cout << endl;

	//ex01_04_e
	cout << ex04e(number) << endl;

	//ex01_04_f
	int x = rand() % 10, y = rand() % 10;
	cout << add(x, y) << endl;

	//ex01_04_g
	int a;
	cout << "What is x? ";
	cin >> a;
	cout << addOne(a) << endl;
	
}

void ex05() {

	//ex01_05_a
	const int x = 5;
	int array[x];
	for (int i = 0; i < x; i++) {
		cout << "What number goes into position " << i + 1 << " ";
		cin >> array[i];
	}

	//ex01_05_b
	int sum = 0;
	int product = 1;
	for (int j = 0; j < x; j++) {
		sum += array[j];
		product *= array[j];
	}
	cout << "The sum of all the numbers is " << sum << endl;
	cout << "The product of all the numbers is " << product << endl;

	//ex01_05_c
	ex05c(array);

	//ex01_05_d
	ex05d(array);

}
