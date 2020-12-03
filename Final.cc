#include <cstdlib>
#include <cctype>
#include <stdio.h>
#include <stdarg.h>
#include <iostream>

using namespace std;

/*!
* @brief this function counts the num of characters in a string
*
* @param[in] string gets passed into
*@param[out] int value of num of chars is returned
*/
int countChar(string in){
  int charCount = 0;
  for(int i = 0; i <in.size(); i++){
    if(in[i] == ' '|| in[i] == '\n'){
     // do nothing
    }else{
      charCount++;
    }

    }
  cout << " There are " << charCount << " characters" << endl;
  return charCount;
  }

/*!
  * @brief this function counts the num of lines in a string
  *
  * @param[in] string gets passed into
  *@param[out] int value of num of lines is returned
  */

int countLine(string in){
  int lineCount = 1;
  for(int i = 0; i <in.size(); i++){
    if(in[i] == '\n'){
        lineCount++;
    }
  }
  cout << " There are " << lineCount << " Lines" << endl;
  return lineCount;
}

int main (int argc, char **argv)
{


  if (argc < 2) {
  string name = "Ohio University";
  string name2 = "Athens";
  countLine(name);
  countChar(name2);
  }
/*!
  * In Main, if no command line arguments passed in then we call CountLine with "Ohio Univesity"
  * and countChar with "Athens". If on argument, we open the file named form the command line and then call
  * countLine and countChar with a pointer to the files contents in memory
  *
  */
string line;
string fileName;
fileName = argv[1];
fileName += ".txt";
ifstream myfile (fileName);
if (myfile.is_open()) {
    while ( getline (myfile,line) ) {
        countLine(line);
        countChar(line);
    }
myfile.close();
}
else cout << "Unable to open file";

  return 0;
}

