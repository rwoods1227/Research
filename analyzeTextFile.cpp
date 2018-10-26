#include "analyzeTextFile.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <map>

using namespace std;

void analyzeTextFile(string const& fileName, unsigned int& lineCount, unsigned int& characterCount)
{
  // initialize variables
  lineCount = 0;
  characterCount = 0;
int nodes = 0;
int on = 0;
int n =0;
std::map<std::string,int>::iterator it;

//intialize map
map<std::string, int> adder32;

  // read file, if not exists cout a warning
  stringstream str;
  ifstream ifstr(fileName);
  if (ifstr.is_open())
 {
   string s;

   while (getline(ifstr,s, ' '))
 {
   // unique checker
std::pair<std::map<std::string,int>::iterator,bool> ret;

//outputs of values
if (on ==1)
{
ret = adder32.insert (std::pair<std::string,int>(s,n));
if(ret.second == false){
  cout << ret.first->second << " ";
  on++;
}
else {
  cout << ret.first->second << " ";
  n++;
  on++;
}
}
else if (on ==2)
{
ret = adder32.insert (std::pair<std::string,int>(s,n));
if(ret.second == false){
  cout << ret.first->second << " ";
  on++;
}
else {
  cout << ret.first->second << " ";
  n++;
  on++;
}
}
else if (on ==3)
{
ret = adder32.insert (std::pair<std::string,int>(s,n));
if(ret.second == false){
  cout << ret.first->second << endl;
  on++;
}
else {
  cout << ret.first->second << endl;
  n++;
  on++;
}
on =0;
}

// checks for node
   if (s == ".names")
   {
nodes = nodes +1;
on =1;
   }

//old code for stringstream
   str  << s;
 }

 /*
 char c;
  while (str.get(c))
   {
     //    cout <<c;
    if (str.peek() == '\t')
     {
       //  cout << '\t';
       //   lineCount = lineCount +1;
      characterCount = characterCount + 1;
     }
    //  else if (str.peek() == '\t')
    //  {
    //      cout << '\t';
    //      characterCount = characterCount + 2;
    //    }
    else if (str.peek() == ' ')
     {
       //   cout << ' ';
      characterCount = characterCount + 1;
     }
    else
     {
	characterCount = characterCount + 1;
     }
    }
    */
 }


 //error output
  else {
    cerr << "No such file exists" << endl;
 }


  //cout << characterCount << endl;
    //   cout << lineCount << endl;


 // close file
  ifstr.close();






}

#include <iostream>
#include <string>
#include "analyzeTextFile.h"

using namespace std;

int main(int argc, char *argv[])
{

    //Question 1: Analyze a text file and output the total number of lines as well as the total number of displayable characters including whitespace.
    string fileName = "adder32.txt";
    unsigned int lineCount = 0;
    unsigned int characterCount = 0;

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


    analyzeTextFile(fileName, lineCount, characterCount);
    //  cout << endl;
    //cout << lineCount << " lines" << endl;
    //66cout << characterCount << " characters" << endl;

    return 0;
}