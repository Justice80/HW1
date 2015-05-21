#include"OtherFunctions.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cmath>
#include <string>

int ex04e(int number) {
	number *= 2;
	return number;
}

int add(int x, int y) {
	int sum;
	sum = x + y;
	return sum;
}

int addOne(int& x) {
	x++;
	return x;
}

void ex05c(int array[]) {
	for (int i = 0; i <= 4; i++) {
		cout << array[i] << " ";
	}
	cout << endl;
}

void ex05d(int array[]){
	int x;
	bool y = false;
	cout << "Enter a number ";
	cin >> x;
	for (int i = 0; i <= 4; i++) {
		if (x == array[i])
			cout << x << " is in the array\n";
	}
}