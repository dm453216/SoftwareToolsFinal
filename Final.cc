#include <cstdlib>
#include <cctype>
#include <stdio.h>
#include <stdarg.h>
#include <iostream>

using namespace std;

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

