/* Andre Foreman Practice


*/
using namespace std;
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <sstream>
#include <cctype>
// Do not include external libraries #include boost // FOR UPPERCASE

int countVowelsInString(string userString) 
{
    int count = 0;
    char listOfVowelsUpper[] = "AEIOUY";
    char listOfVowelsLower[] = "aeiouy";
 
    for (int i = 0; i < userString.size(); i++)
    {
        //a
        if ((userString[i] == listOfVowelsUpper[0]) || (userString[i] == listOfVowelsLower[0]))
        {
            count += 1;
        }
        //e
        else if (userString[i] == listOfVowelsUpper[1] || (userString[i] == listOfVowelsLower[1]))
        {
            count += 1;
        }
        //i
        else if (userString[i] == listOfVowelsUpper[2] || (userString[i] == listOfVowelsLower[2]))
        {
            count += 1;
        } 
        //o
        else if (userString[i] == listOfVowelsUpper[3] || (userString[i] == listOfVowelsLower[3]))
        {
            count += 1;
        }
        //u
        else if (userString[i] == listOfVowelsUpper[4] || (userString[i] == listOfVowelsLower[4]))
        {
            count += 1;
        }
        else if (userString[i] == listOfVowelsUpper[5] || (userString[i] == listOfVowelsLower[5]))
        {
            count += 1;
        }

    }
        return count;
}
int countConsonants(string userString) {
    int count = 0;
    // SIZE 19 ARRAY
    char listOfConsonantsUpper[] = "BCDFGJKLMNPQSTVXZHRW";
    char listOfConsonantsLower[] = "bcdfgjklmnpqstvxzhrw";
    
    for (int i = 0; i < userString.size(); i++) {
        //b
        if ((userString[i] == listOfConsonantsUpper[0]) || (userString[i] == listOfConsonantsLower[0]))
        {
            count += 1;
        }
        //c
        else if ((userString[i] == listOfConsonantsUpper[1]) || (userString[i] == listOfConsonantsLower[1]))
        {
            count += 1;
        }
        //d
        else if ((userString[i] == listOfConsonantsUpper[2]) || (userString[i] == listOfConsonantsLower[2]))
        {
            count += 1;
        }
        //f
        else if ((userString[i] == listOfConsonantsUpper[3]) || (userString[i] == listOfConsonantsLower[3]))
        {
            count += 1;
        }
        //G
        else if ((userString[i] == listOfConsonantsUpper[4]) || (userString[i] == listOfConsonantsLower[4]))
        {
            count += 1;
        }
        //J
        else if ((userString[i] == listOfConsonantsUpper[5]) || (userString[i] == listOfConsonantsLower[5]))
        {
            count += 1;
        }
        //K
        else if ((userString[i] == listOfConsonantsUpper[6]) || (userString[i] == listOfConsonantsLower[6]))
        {
            count += 1;
        }
        //l
        else if ((userString[i] == listOfConsonantsUpper[7]) || (userString[i] == listOfConsonantsLower[7]))
        {
            count += 1;
        }
        //m
        else if ((userString[i] == listOfConsonantsUpper[8]) || (userString[i] == listOfConsonantsLower[8]))
        {
            count += 1;
        }
        //n
        else if ((userString[i] == listOfConsonantsUpper[9]) || (userString[i] == listOfConsonantsLower[9]))
        {
            count += 1;
        }
        //p
        else if ((userString[i] == listOfConsonantsUpper[10]) || (userString[i] == listOfConsonantsLower[10]))
        {
            count += 1;
        }
        //q
        else if ((userString[i] == listOfConsonantsUpper[11]) || (userString[i] == listOfConsonantsLower[11]))
        {
            count += 1;
        }
        //s
        else if ((userString[i] == listOfConsonantsUpper[12]) || (userString[i] == listOfConsonantsLower[12]))
        {
            count += 1;
        }
        //t
        else if ((userString[i] == listOfConsonantsUpper[13]) || (userString[i] == listOfConsonantsLower[13]))
        {
            count += 1;
        }
        //v
        else if ((userString[i] == listOfConsonantsUpper[14]) || (userString[i] == listOfConsonantsLower[14]))
        {
            count += 1;
        }
        //x
        else if ((userString[i] == listOfConsonantsUpper[15]) || (userString[i] == listOfConsonantsLower[15]))
        {
            count += 1;
        }
        //z
        else if ((userString[i] == listOfConsonantsUpper[16]) || (userString[i] == listOfConsonantsLower[16]))
        {
            count += 1;
        }
        //h
        else if ((userString[i] == listOfConsonantsUpper[17]) || (userString[i] == listOfConsonantsLower[17]))
        {
            count += 1;
        }
        //r
        else if ((userString[i] == listOfConsonantsUpper[18]) || (userString[i] == listOfConsonantsLower[18]))
        {
            count += 1;
        }
        //w
        else if ((userString[i] == listOfConsonantsUpper[19]) || (userString[i] == listOfConsonantsLower[19]))
        {
            count += 1;
        }
    }
    return count;
}
int countAlphabetChars(string userString) {
    int count = 0;
    for (int i = 0; i < userString.size(); i++) {
        if (isalpha(userString[i])) {
            count += 1;
        }
    }
    return count;
}
int countPunctuation(string userString) {
    int count = 0;
    for (int i = 0; i < userString.size(); i++) {
        if (ispunct(userString[i])) {
            count += 1;
        }
    }
    return count;
}
int countUpper(string userString) {
    int count = 0;
    for (int i = 0; i < userString.size(); i++) {
        if (isupper(userString[i])) {
            count += 1;
        }
    }
    return count;
}
int countLower(string userString) {
    int count = 0;
    for (int i = 0; i < userString.size(); i++) {
        if (islower(userString[i])) {
            count += 1;
        }
    }
    return count;
}
int countDigits(string userString) {
    int count = 0;
    for (int i = 0; i < userString.size(); i++) {
        if (isdigit(userString[i])) {
            count += 1;
        }
    }
    return count;
}
int countNewline(string userString) {
    int count = 0;
    for (int i = 0; i < userString.size(); i++) {
        if ((userString[i]) == '\n') 
        {
            count += 1;
        }
    }
    return count;
}
int countSpacesEXCLUDINGTABS(string userString) {
    int count = 0;
    for (int i = 0; i < userString.size(); i++) {
        if ((userString[i] == ' ') && (userString[i + 1] != ' '))
        {
            count += 1;
        }
    }
    return count;
}
int countCharsIncludingWhiteSpace(string userString) {
    int count = 0;  
    
    for (auto character : userString) {
        count += 1;
    }
    return count;
}
int countCharsExcludingWhiteSpace(string userString) {
    int count = 0;
    for (auto character : userString) {
        count += 1;
    }
    
    for (int i = 0; i < userString.size(); i++) {
        if (userString[i] == ' ') {
            count -= 1;
        }
        
    }
    return count;

}
int countOccuencesofWord(string userString, string wantedWord) {
    // INCOMPLETE
    int count = 0;
    vector<string> words;
    string eachNewWord;
    int iterationHolder = 0;


    for (int i = 0; i < userString.size(); i++) {
        if (userString[i] == ' ') {
            eachNewWord = userString.substr(iterationHolder,-i); // Start at 0, end where the space is
            iterationHolder = i;

            words.push_back(eachNewWord); // Add The new word to the array

        }
    }

    for (auto word : words) {
        if (word == wantedWord){
            count += 1;
            cout << word;
        }
     }

    return count;
}
double averageWordLength(string userString) {
    // INCOMPLETE
    return 0.0;
}
int countWords(string userString) {
    // INCOMPLETE
    int numWords = 1;
    for (int i = 0; i < userString.size(); i++) {
        if (userString[i] == ' ' || userString[i] == ' \n') {
            numWords += 1;
        }
    }

    return numWords;
}
int countWordsAbove(string userString, int aboveThisNum) {
    return 0;
}
string findLongestWord(string userString) {
    string someString;
    return someString;
}

void printFunctions(string userString, string desiredWord, int wordsAbovethisNum) {
    cout << "The Number of Vowels is: " << countVowelsInString(userString) << endl;
    cout << "The Number of Consonants is: " << countConsonants(userString) << endl;
    cout << "The Number of Alpabetic Characters is: " << countAlphabetChars(userString) << endl;
    cout << "The Number of Punctuation Characters is: " << countPunctuation(userString) << endl;
    cout << "The Number of UpperCase Characters is: " << countUpper(userString) << endl;
    cout << "The Number of LowerCase Characters is: " << countLower(userString) << endl;
    cout << "The Number of Digit Characters is: " << countDigits(userString) << endl;
    cout << "The Number of Newline Characters is: " << countNewline(userString) << endl;
    cout << "The Number of Spaces EXCLUDING Tab or Newline is: " << countSpacesEXCLUDINGTABS(userString) << endl;
    cout << "The Number of characters including whitespace is: " << countCharsIncludingWhiteSpace(userString) << endl;
    cout << "The Number of characters excluding whitespace is: " << countCharsExcludingWhiteSpace(userString) << endl;
    cout << "The Number of times '" << desiredWord << "' occurs is: " << countOccuencesofWord(userString, desiredWord) << endl;
    cout << "The Number of Average Word Length is: " << averageWordLength(userString) << endl;
    cout << "The Number of Words is: " << countWords(userString) << endl;
    cout << "The Number of Words above is: " << countWordsAbove(userString, wordsAbovethisNum) << endl;
    cout << "The Longest word(s): " << findLongestWord(userString) << endl;

}
int main() //Will need command line arguments
{
	//Declare input file stream
	ifstream inFile;

	// Open Stream
   inFile.open("C:\\Users\\windows10\\Documents\\rlepractice.txt"); // Original Tester 

	if (!inFile) {
		cerr << "Unable to open file";
		exit(1);   // call system to stop
	}

    //Get extracts characters from the stream, continue while there are characters left.
    char c;
    string values;
    while (inFile.get(c)) // While stream 
    {
        values += c; // Put each character from the file into this new string called values
        //cout << c;
    }
    cout << values;
    inFile.close();
    cout << "\n";

    string testString = values;
    string desiredWord = "Line";
    int wordsAbovethisNum = 4;
    printFunctions(testString, desiredWord, wordsAbovethisNum);
}


