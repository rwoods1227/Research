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
string names = ".names";	
	
//std::map<std::string,int>::iterator it;

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
	// cout << s << endl;
	   
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
if(ret.second == false)
{
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
if(ret.second == false)
{
  cout << ret.first->second << endl;
  on =0;
}
else {
  cout << ret.first->second << endl;
  n++;
  on = 0;
}

}
//various checks	   
//cout << s.length() << endl;	   
//cout << s.compare(names) << endl;
	   
// checks for node	   
if (s.compare(names) == 0)
   {
nodes = nodes +1;
//cout << "nodes = " << nodes << endl;
on = 1;
   }

 }

 }
 //error output
  else {
    cerr << "No such file exists" << endl;
 }
 // close file
  ifstr.close();
}
