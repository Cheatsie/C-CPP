#include <iostream>
#include <vector>
#include <crtdbg.h>

using namespace std;
int power(double base, int raisedTo) {
	return pow(base, raisedTo);
}
int numDigits(unsigned long long num, int base) {
	int digitCount = 0;
	while (num > 0) {
		num = num / base;
		digitCount += 1;
	}
	return digitCount;
}
int highestCommonFactor(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return highestCommonFactor(b, a % b);
	}
}
string toSTRING(int n, int base) {
	// if base == 1 fix
	string digits = "0123456789ABCDEF";
	if (n < base) {
		string s(1, digits[n]); // turn char to string
		return s;
	}
	else
		return toSTRING(n / base, base) + digits[n % base];
}
double binetFibonacci(int n) {
	double firstValue = power(1 + sqrt(5) , n);
	double secondValue = power(1 - sqrt(5), n);
	double thirdValue = pow(2, n) * sqrt(5);

	double subValue = firstValue - secondValue;
	double finalValue = subValue / thirdValue;
	return finalValue;	
}
int recursivefibo(int n) {
	if (n == 0) {
		return 0;
	}
	if (n == 1) {
		return 1;
	}
	else {
		return recursivefibo(n - 1) + recursivefibo(n - 2);
	}
}	
double calcPiRecursive(double n) {
	if (n == 0) {
		return 4;
	}
	else {
		return pow(-1, n) / (1 + (2 * n) + calcPiRecursive(n - 1));
	}
		
}
void printValueOfPi(int N) // Taps out at 50 digits or so
{
	// Find value of pi upto
	// using acos() function
	double pi = 2 * acos(0.0);

	// Print value of pi upto
	// N decimal places
	printf("%.*lf\n", N, pi);
}

int main() {
	cout << "hello world111111";
}
