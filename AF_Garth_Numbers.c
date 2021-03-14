/* Coder: Andre Foreman
* Date: Friday, Feb 20
* Purpose: Take input from the user, validate input, and return a number of requested operations on the number.
*/
#define _CRT_SECURE_NOWARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h> 


void isEven(int num) // 5%
{
	if (num % 2 == 0)
	{
		printf("%d is Even\n", num);
	}
	else
		printf("%d is Odd\n", num);
} 

void isTriangular(int num)  // 5%
{
	int counterVariable = 0;
	int checkVariable = num;
	for (int i = 1; i < num; i++)
	{
		counterVariable += i; // ADD TO ITSELF PLUSE THE ITERATION
		//printf("%d\n", counterVariable); //Run through and check if the number is triangular just in case!
		if (checkVariable == counterVariable)
		{
			printf("%d is a Triangular Number\n", num);
			break; //Break the search loop because it's found anyway
		}
	}
	if (counterVariable != checkVariable) //OUTSIDE THE LOOP!! Since the loop was broken, if they are not equal at any point, it is not a triangular number.
	{
		printf("%d is NOT a Triangular Number\n", num);
	}
}

void isPrime(int num) // 10 %
{
	for (int i = 1; i < num; i++)
	{
		if (num > 1) //NUM MUST BE GREATER THAN 1
		{
			if (num % i == 0) //IF ANY iteration mulitplies without a remainder, it is not prime
			{
				printf("%d is not a prime number\n", num);
				break; // STOP IF MULTIPLE WAS FOUND 
			}
			else
			{
				printf("%d is a prime number\n", num);
			}
		}

	}
	if (num == 1)
	{
		printf("%d is not a prime a number", num);
	}
}

void isSquare(int num) // 10%
{ 
	//check if numroot is a whole number
	double numRoot = sqrt(num);
	
	if (numRoot != 1) // I think there is an error here, I'm not sure how to fix.
	{
		printf("%d is a square number\n", num);
	}
	else 
	{
		printf("%d is a not square number\n", num);
	}

}

void isPowerof2(int num) // 10%
{
	int holderList[32] = { 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192 ,16384 ,32768 ,65536 ,131072 ,262144 , 524288
		, 1048576 , 2097152 , 4194304, 8387608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824, 2147483448 
	};
	
	bool inList = false;
	for (int i = 0; i < 32; i++)
	{
		if (holderList[i] == num) 
		{
			inList = true;
			printf("%d is a power of 2\n", num);
			break; //BREAK LOOP ONCE FOUND
		}	
	}

	if (inList == false) 
	{
		printf("%d is not a power of 2\n", num);
	}
		

}

void isFactorial(int num) //10%
{
	int holderList[12] = { 1,2,6,24,120,720,5040,40320,362880,3628800,39916800,479001600};

	bool inList = false;
	for (int i = 0; i < 12; i++)
	{
		if (holderList[i] == num)
		{
			inList = true;
			printf("%d is a Factorial number\n", num);
			break; //BREAK LOOP ONCE FOUND
		}
	}

	if (inList == false)
	{
		printf("%d is not a Factorial number\n", num);
	}
}

void isFibonnacci(int num) // 10%
{
	int holderList[47] = {0, 1, 1, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 
		4181, 6765, 10946, 17711, 28657, 46368, 75025, 121393, 196418, 317811, 514229, 832040, 1346269, 2178309, 3524578, 
		35702887, 9227465, 14930352, 24157817, 39088169, 63245986, 102334155, 165580141, 267914296, 433494437, 
		701408733, 1134903170, 1836311903, 2971215073};
	
	bool inList = false;
	for (int i = 0; i < 50; i++)
	{
		if (holderList[i] == num)
		{
			inList = true;
			printf("%d is a Fibonnacci number\n", num);
			break; //BREAK LOOP ONCE FOUND
		}
	}

	if (inList == false)
	{
		printf("%d is not a Fibonnacci number\n", num);
	}

}

void isPerfectORDeficientORAbundant(int num) // 10%
{
	//if
	//printf("%d is a isPerfectDeficientAbundant number\n", num);
	//else
	//printf("%d is not a isPerfectDeficientAbundant number\n", num);
}

void evenParityBit(int num) // Even Parity Bit
{
	int number = num;
	uint32_t a[64];
	int i;

	
	for (i = 0; num > 0; i++)
	{
		a[i] = num % 2;
		num = num / 2;
	}
	//Put the ones in NumString
	char numString[64];
	for (i = i - 1; i >= 0; i--)
	{
		numString[i] = a[i];
	}
	
	//Count the number of ones in numString
	uint32_t listofOnes= 0;
	for (i = 0; i < 64; i++)  
	{
		if (numString[i] == 1) 
		{
			listofOnes += 1;
		}
	}
	
	
	//If The List is an even number then it's an even parity bit.
	if (listofOnes % 2 == 0) 
	{
		printf("%d is an Even Parity Bit Number", number );
	}
	else 
	{
		printf("%d is not an Even Parity Bit Number", number);
	}
	printf("\n");
}

void numOfBase10Dig(int num) // 5%
{

}

void numInBinary(int num)
{
	int number = num; 
	uint32_t a[64];
	int i;

	for ( i = 0; num > 0; i++)
	{
		a[i] = num % 2;
		num = num / 2;
	}
	printf("%d in Binary is ", number); 
	char numString[64];
	for (i = i - 1; i >= 0; i--)
	{
		printf("%d", a[i]);
		numString[i] = a[i];
	}
	printf("\n");
}

void numToDecimal(int num) //5% 
{
	//My input does not take anything with commas.
	printf("%d in decimal is ", num);
}

void isPalindronme(int num) // 3%
{
	char valueArray[8];
	sprintf_s(valueArray, "%c", num);
	
	char valueArray2[10]; //Start at last array and go backwards
	for (int i = 7; i > 0; i--) 
	{
		valueArray2[i] = valueArray[i];
	}

	if (valueArray == valueArray2)
	{
		printf("%d is a palindrome\n", num);
	}
	else 
	{
		printf("%d is not an palindrome\n", num);
	}
}

void callFunctions(int num)
{
	isEven(num);
	isTriangular(num);
	isPrime(num);
	isSquare(num);
	isPowerof2(num);
	isFactorial(num);
	isFibonnacci(num);
	isPerfectORDeficientORAbundant(num);
	evenParityBit(num);
	numOfBase10Dig(num);
	isPalindronme(num);
	numInBinary(num);
	numToDecimal(num);
}

int main()
{
	printf("Please enter a number: ");
	int CAPACITY = INT_MAX;
	
	// Prompt shows maximum input value. 2%
	printf("> int < [%+d .. %+d]\n", INT_MIN, INT_MAX, (unsigned)sizeof(int) * CHAR_BIT);
	
	uint32_t userNum; //Accepts any unsigned 32 bit intiger
	scanf_s("%d", &userNum); // POINTER | //scanf_s took a potential overflow error away | NOT SURE WHAT IT DOES

	// DATA VALIDATION
	bool notInRange = true;
	do 
	{
		// check for a number
		while (scanf_s("%d", &userNum) != 1) 
		{
			// if read failed, look for a whitespace and try again.
			int ch;
			while ((ch = getchar()) != EOF && !isspace(ch));  // Detects non Numeric Input. 3%
			printf("Error: not a number!\nTry again: "); 
			printf("Please enter a number: ");
		}	if (notInRange = userNum < 0 || userNum > INT_MAX) // Detects and reports numeric input that is negative OR  greater than  MAX . 3% + 3%
		printf("Error: %d is not in the range [%d..%+d]\nTry again: ", userNum, 0, INT_MAX);
	} while (notInRange);


	callFunctions(userNum); // CALL THE FUNCTION THAT CALLS FUNCTIONS

}
