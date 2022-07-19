#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
//got bored so I did basic input handling, two different kinds one sepeareted into a diff frucntion and the other using cin.fail()



int isInputValid(string str) {
	int retString;
	if (isdigit(str[0])) {
		retString = atoi(str.c_str());
		return retString;
	}
	else {
		cout << "Invalid Argument ";
		return 0;
	}
	;
}
void CubeThis() {
	int retvalue;
	string x;
	//string inputValue;
	cout << "Now may I have a integer that I may cube?\n";
	cin >> x;
	//input validation
	if (isInputValid(x)) {
		cout << "Your cubed value of " + x + " is " + std::to_string(retvalue = pow(atoi(x.c_str()), 3));
	}
	else {
		cout << "Error: Input is not an integer!" << endl;
		cin.ignore(10000, '\n');;
		//CubeThis();
	}
}
void SumAverage() {
	int a, b, c;
	// Speak to User and request input
	cout << "Greeting Bug Person,  I request you input three number for math.\n";
	cout << "You can enter them seperated by spaces, or individual lines.\n";
	//handle input either in one line or in three sepearate requests
	cin >> a >> b >> c;
	if (cin.fail()) {
		cout << "Error: Input is not an integer!" << endl;
		cin.clear();
	}
	else {
		cout << "Sum = " + std::to_string((a + b + c)) + "\n";
		cout << "Average = " + std::to_string((a + b + c) / 3) + "\n";
	}
}

int main() {
	
	//SumAverage();
	CubeThis();
	return 0;
}
