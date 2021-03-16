
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <locale>
// IONOTES
using namespace std;
int main() {
	//Anything you can do to cin or filein you can do to cout or cin
	//FILE IO IN THE CODE
	ifstream fin("/filepath");
	if (!fin) {
		cout << "Couldn't  open file.\n";
		return EXIT_FAILURE;
	}
	

	// IO.1
	while (!cin.eof()) {
		char ch;
		cin >> ch;
		cout << ch;
		//LEAVES EXTRA LINES AT THE BOTTOM
	}
	return EXIT_SUCCESS;

	//IO.2
	//DOUBLE TEST FOR EOF
	while (!cin.eof()) {
		char ch;
		cin.get(ch);
		if (cin.eof()) {
			break;
		}
		cout << ch;
	}
	return EXIT_SUCCESS;

	// IO.3
	for(;;) {
		char ch;
		cin.get(ch);
		if (cin.eof()) {
			break;
		}
		cout << ch;
	}
	return EXIT_SUCCESS;

	// IO.4
	for (;;) {
		char ch;
		cin.get(ch);
		if (cin.fail() || cin.bad())  { // Have we fauked to do any inputs
			break;
		}
		cout << ch;
	}
	return EXIT_SUCCESS;

	// IO.5 
	for (;;) {
		char ch;
		cin.get(ch);
		if (!cin) { // Simplify
			break;
		}
		cout << ch;
	}
	return EXIT_SUCCESS;

}