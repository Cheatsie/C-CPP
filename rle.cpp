/* Coder: Andre Foreman
 Purpose: Updated rle
 */

#include <string>
#include <iostream>
#include <string>
#include <deque>
#include <fstream>
using namespace std;
int main(int argc, char* argv[]) {

    deque <string> args(argv + 1, argv + argc);
    bool showDebug = false;
    bool showHelp = false;
    string infilename;
    string outfilename;

    if (args.empty())
    {
        cout << "Error: No commandline arguments detected - showing help" << endl;
        // Show help = true
    }
    else // args not empty
    {
        if (args.front() == "--debug") {
            showDebug = true;
            // pop front
        }
        if (args.front() == "help") {
            showDebug = true;
            // pop front
        }
        if (args.empty()) {
            cout << " FILENAME - Error";
        }

        // Recieve file and pop from CMD
        infilename = args.front();
        args.pop_front();

        if (args.empty())
            outfilename = infilename + ".rle";
        else
            outfilename = args.front();
    }

    // Declare input file stream
    ifstream inFile(infilename, ios::binary);
    if (!inFile) {
        cerr << "Could not open file";
        //EXIT
    }

    ofstream outFile(outfilename, ios::binary);
    unsigned char matchChar;
    if (!inFile.get((char&)matchChar)){
        //exit
    }
    unsigned char newChar;
    std::streamsize charCount = 1;
    while (inFile.get((char&)newChar)) {
        if (newChar == matchChar && charCount < 255) {
            ++charCount;
        }
        else {
            outFile << (unsigned char)charCount;
            outFile << matchChar;
            
            charCount = 1;
            matchChar = newChar;
        }
    }
}