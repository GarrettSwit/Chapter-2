#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

void CubeThis(){
	float retvalue, x;
	cout << "Now may I have a value that I may cube?\n";
	cin >> x;
	cout <<"Your cubed value of " + std::to_string(x) + " is " + std::to_string(retvalue = pow(x, 3));
}
void SumAverage() {
	float a, b, c, x;
	// Speak to User and request input
	cout << "Greeting Bug Person,  I request you input three number for math.\n";
	cout << "You can enter them seperated by spaces, or individual lines.\n";
	//handle input either in one line or in three sepearate requests
	cin >> a >> b >> c;
	cout << "Sum = " + std::to_string((a + b + c)) + "\n";
	cout << "Average = " + std::to_string((a + b + c) / 3) + "\n";
}
int main() {
	
	SumAverage();
	CubeThis();
	return 0;
}
