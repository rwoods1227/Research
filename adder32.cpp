#include <iostream>
#include <string>
#include "analyzeTextFile.h"

using namespace std;

int main(int argc, char *argv[])
{
    // initialize inputs
    string fileName;
    unsigned int nodes = 0;
    unsigned int vertices = 1;

    // if filename entered through the command line
    if (argc > 1)
    {
        fileName = argv[1];
    }
    // if not, ask for filename
    else
    {
      cout << "Enter a file name to analyze: ";
      cin >> fileName;

      //fileName = "../sampleTextFile.txt";
    }


    analyzeTextFile(fileName, nodes, vertices);
    //  cout << endl;
    //cout << lineCount << " lines" << endl;
    //66cout << characterCount << " characters" << endl;

    return 0;
}
