#include <string>
#include <iostream>
#include <cmath>
using namespace std; // Make Names From Std Visible Without Std::

void AFprint(string input) {
	cout << input << endl;
}
void AFprint(char input) {
	cout << input << endl;
}
void AFprint(int input) {
	cout << input << endl;
}
void AFprint(double input) {
	cout << input << endl;
}
void AFprint(float input) {
	cout <<  input << endl;
}

int main() {

	//AWESOME VARIABLES AUTO
	auto autoVariableInt = 5;
	auto autoVariableDouble = 5.0;
	auto autoVariableChar = '5';
	auto autoVariableString = "5"; //Pointer, or char *, which is array

	cout << typeid(autoVariableInt).name() << endl;
	cout << typeid(autoVariableDouble).name() << endl;
	cout << typeid(autoVariableChar).name() << endl;
	cout << typeid(autoVariableString).name() << endl;

	AFprint(autoVariableInt);
	AFprint(autoVariableDouble);
	AFprint(autoVariableChar);
	AFprint(autoVariableString);
}