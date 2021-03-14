/* Coder: Andre Foreman
* Date: Due March, 8 2021
* Purpose: Take an Array of size N from the user. Sort The array, Execute a series of instructions on the Array.
* 
Notes: I think the actually errors in calculation are coming from either memory errors, or type errors, I am not sure how to fix them.
I tried to create a complete program that showed I at least understood and could execute on most of the instructions, 
Though I guess I failed on the part that is most important, the actual output. I hope that despite the obvious failings that this still did a good job
in showcasing what I understand, and what I do not understand, and hopefully that is still worth marks.

I have tried for days now and I cannot figure out what is causing these errors. 
I will initialize a variable and get an error saying it's uninitialized memory and so on, I cannot tell if the errors
are coming from errors in my actual logic or elswhere (memory, data types, etc)

Even when I have print statments rounded to 3 decimal places, I am when I run the code it will execute with 4 on occasion, I am really stumped.
Apologies, Dre

*/

#define _CRT_SECURE_NOWARNINGS
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <math.h>
#include "MultiFile3Percent.h"
#include <ctype.h>

 
medianValue(int userArray[], int arraySize) {
	// check for even case 
	if (arraySize % 2 != 0)
		return userArray[arraySize / 2];

	return userArray[(arraySize - 1) / 2] + userArray[arraySize / 2] / 2.0;
}
meanAbsoluteDeviationAboutMedian(int userArray[], int sizeOfArray) 
{
	//get median
	float medValue = medianValue(userArray, sizeOfArray);
	
	//subtract median - absValue of each value in array 
	float sumValues = 0;
	for (int i = 0; i < sizeOfArray; i++) {
		float iterationValue = medValue - abs(userArray[i]); //ABSOLUTE VALUE
		sumValues += iterationValue; //sum those values
	}
	
	//divide by sizeOfArray
	float returnValue = sumValues / sizeOfArray;
	return returnValue;

}
//I am not actually sure how to calculate outliers 
outlierValues2x(int userArray[]) {
	return 0; //Return outlier
}
outlierValues3x(int userArray[]) {
	return 0; //Return outlier
}
leastSquaresRegressionLineValue(int userArray[], int sizeOfArray) {
	//PrintStatment about the y intercept
	//Return slope of the line
	for (int i = 1; i <= sizeOfArray; i++)
	{
		//X VALUE IS THE ITERATION
		// Y VALYE IS THE VALUE AT THAT INDEX
		//Weird errors with memory I don't understand

		float sumX = sumX + i;
		float sumX2 = sumX2 + i * i;
		float sumY = sumY + userArray[i];
		float sumXY = sumXY + i * userArray[i];

		float b = (sizeOfArray * sumXY - sumX * sumY) / (sizeOfArray * sumX2 - sumX * sumX);
		float a = (sumY - b * sumX) / sizeOfArray;

		printf("\nThe Regression Intercept is %.3f", b); //3 Decimal Places!
		return a;
	}
}
modeValue(int userArray[], int sizeOfArray) {
	int maxValue = 0, maxCount = 0, i, j;

	if (userArray[0] == userArray[-1]) // If all the values in the array are the same there is no mode || Hope to god they arent equal by chance! 
	{
		return "No Mode";
	}

	// Execute mode calc otherwise
	else
	{
		for (i = 0; i < sizeOfArray; ++i) 
		{
			int count = 0;

			for (j = 0; j < sizeOfArray; ++j) 
			{
				if (userArray[j] == userArray[i])
					++count;
			}

			if (count > maxCount) 
			{
				maxCount = count;
				maxValue = userArray[i];
			}
		}
		//Also print how many modes there are!
		printf("\nThe mode occurs %.3d times", maxCount); // Print here instead of returning two values from the function
		return maxValue;
	}
	
	
}
standardDeviationValue(int userArray[], int sizeOfArray) {
	double value = sqrt(varianceValue(userArray, sizeOfArray));
	return value;
}
varianceValue(int userArray[], int sizeOfArray) {
	// Compute mean  
	int sum = 0;
	for (int i = 0; i < sizeOfArray; i++)
		sum += userArray[i];
	double mean = (double)sum / (double)sizeOfArray;

	// Compute sum squared  
	// differences with mean. 
	double sqDiff = 0;
	for (int i = 0; i < sizeOfArray; i++)
		sqDiff += (userArray[i] - mean) *
		(userArray[i] - mean);
	
	float value = sqDiff / sizeOfArray;
	printf("%f", value);
	return value;
}
arithmeticMeanValue(int userArray[], int sizeOfArray) 
{
	int counterVariable = 0;
	for (int i = 0; i < sizeOfArray; i++)
	{
		counterVariable += userArray[i];
	}
	float newValue = (float)(counterVariable / sizeOfArray); //Cast to float for accurate mean
	return newValue;
}
meanAbsoluteDeviationAboutMean(int userArray[], int sizeOfArray) {
	//get mean
	float meanValue = arithmeticMeanValue(userArray, sizeOfArray);

	//subtract mean - absValue of each value in array 
	float sumValues = 0;
	for (int i = 0; i < sizeOfArray; i++) {
		int iterationValue = meanValue - abs(userArray[i]); //ABSOLUTE VALUE
		sumValues += iterationValue; //sum those values
	}

	//divide by sizeOfArray
	float returnValue = sumValues / sizeOfArray;
	return returnValue;

}
int cmpfunc(const void* a, const void* b) //For qsort Marks
{
	return (*(int*)a - *(int*)b);
}
maxValue(int userArray[]) {
	return (userArray[-1]); //Print last element of the array
}
//minValue(int userArray[]) {
	//return (userArray[0]); //Print first element of the array // EXECUTED IN THE HEADER FILE INSTEAD
//}
void numValues(float userArray[]) {
	//Does not need to be used
}
void callFunctions(int userArray[], int sizeofArray) {
	// Round to 3 decimal places
	// May have to use pointer, not sure if necessary for the return values of functions.
	//Using float so that I can round to 3 decimal places, Getting error on potential loss on data.
	printf("\n------------------------------------");
	printf("\n# Of elements:                     %d", sizeofArray); //Instead of function numValues, just print size
	
	float minimumValue = minValue(userArray);
	printf("\nMinimum:                           %.3f", minimumValue); //CHANGE TO 3 DECIMAL PLACES
	
	float maxmimumValue = maxValue(userArray);
	printf("\nMaximum:                           %.3f", maxmimumValue);
	
	float meanValue = arithmeticMeanValue(userArray, sizeofArray);
	printf("\nMean:                              %.3f", meanValue);

	float mediValue = medianValue(userArray, sizeofArray);
	printf("\nMedian:                            %.3f", mediValue);

	
	float varianceV = varianceValue(userArray, sizeofArray);
	printf("\nVariance:                          %.3f", varianceV);

	float standardDeviation = standardDeviationValue(userArray, sizeofArray);
	printf("\nStandard Deviation:                %.3f", standardDeviation);
	
	printf("\n--------------------------------------");

	float modeNumber = modeValue(userArray, sizeofArray); //HERE IS BOTH THE MODE, AND THE NUMBER OF TIMES IT OCCURS
	printf("\nMode is:                           %.3f", modeNumber); // Says using uninitialized memory, I Don't understand
	
	printf("\n--------------------------------------");
	
	
	float mADAMean = meanAbsoluteDeviationAboutMean(userArray, sizeofArray);
	printf("\nMean Absolute Deviation about mean:%.3f", mADAMean);
	
	float mADAmedian = meanAbsoluteDeviationAboutMedian(userArray, sizeofArray);
	printf("\nMean Absolute Deviation about median:%.3f", mADAmedian);
	printf("\n--------------------------------------");

	float regressionSlope = leastSquaresRegressionLineValue(userArray, sizeofArray);
	printf("\nRegressionSlope:                     %.3f", regressionSlope);
	printf("\n--------------------------------------");
	
	float outlier2x = outlierValues2x(userArray);
	printf("\nOutliers(2x) is:                     %.3f", outlier2x);

	float outlier3x = outlierValues3x(userArray);
	printf("\nOutliers(3x):                        %.3f", outlier3x);
}
void sortArray(float arr[], int n)
{
	//Did not need to use
}
void printArray(float A[], int size) //FUNCTION TO PRINT VALUES IN ARRAY
{
	for (int i = 0; i < size; i++) {
		printf("%f ", A[i]);
		printf("\n");
	}
		
	printf("\n");
}
int main() {

	int sizeofArray;
	printf("\n Enter the size of the array:"); // Your program must handle any length of list
	scanf_s("%d", &sizeofArray);
	float* userArray;
	
	//Create Dynamic Array to store Array of Any Size
	userArray = (float*)malloc(sizeofArray * sizeof(float)); //Has to be float type to accept REAL numbers, not just ints
	printf("\n Enter the values of the array:");
	int i; //Initialize iteration Variable
	do{
		while(scanf_s("%f", &userArray) != "end") //Reads double precision real numbers
		{
			if (scanf_s("%f", &userArray) == isdigit) //Check if value is a number 
			{
				continue;
			}
			
			for (i = 0; i < sizeofArray; i++) //GET N NUMBER OF INPUTS FROM THE User
			{
				scanf_s("%f", &userArray[i]); //Dereferencing null pointer ERROR? changing to |scanf_s("%f", &userArray[i])| Doesn't fix 

			}
		}
			
	} while (!EOF); //Terminate on EOF 

		
	//printArray(userArray, sizeofArray); //TEST UNSORTED
	
	//DO SIMPLE SORT OF ARRAYS ||
	while (true) {
		float swapped = 0;

		for (i = 0; i < sizeofArray - 1; i++) {
			if (userArray[i] > userArray[i + 1]) //Another Error I don't understand.
			{
				float temp = userArray[i];
				userArray[i] = userArray[i + 1];
				userArray[i + 1] = temp; // There should be no conversion here.
				swapped = 1;
			}
		}
		if (swapped == 0) {
			break;
		}
	}
	//printArray(userArray, sizeofArray); //TEST SORTED
	
	//DO ANOTHER SORT FOR EXTRA MARKS 2%
	//qsort(userArray, sizeofArray, sizeof(int), cmpfunc);
	
	callFunctions(userArray, sizeofArray); //Call the function to execute the rest of the functions
	
	free(userArray); //free the memory created from array

	return 0;
}



