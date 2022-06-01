// Rolling dice program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {

	int num1, num2, Dice;
	int sum = 0;

	cout << " Enter two numbers " << endl;
	cin >> num1 >> num2;

	sum = num1 + num2;
	if (sum == 7 || sum == 11) {
		Dice = 1;

	}
	else if (sum == 2) {
		Dice = 2;

	}
	else if (sum == 12) {
		Dice = 3;

	}
	else if (sum != 7, 11, 2, 12 ) {
		Dice = 4;

	}
	
	switch (Dice) {
	case 1:
		cout << " You won mO guy !! ";
		break;

	case 2:
		cout << " Snake eyes !! ";
		break;

	case 3:
		cout << " Best Shot ever !! ";
		break;

	default:
		cout << " try again next time and enter two number ranging from 1 to 6 ";
	}

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
