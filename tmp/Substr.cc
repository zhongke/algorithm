#include <iostream>
#include <string>

#include "Substr.hh"

using namespace std;


string Substr::getMaxLengthStr(const string& str)
{
   int begin = 0;
   char current;
   string currentSubstr;

   for (int i = 1; i < str.length(); i++) {
       current = str.at(i);
       cout << "current [" << current << "]" << endl;
       currentSubstr = str.substr(begin, i - begin);
       cout << "currentSubstr [" << currentSubstr << "]" << endl;

       if (existDuplicateChar(currentSubstr, current)) {
               begin = i;
       } else {
              currentSubstr += current;
       }

       setMax(currentSubstr);
   }

   return maxSubstr;
}

bool Substr::existDuplicateChar(const string& substr, const char currentChar)
{
        return substr.find(currentChar) != string::npos;
}

void Substr::setMax(const string& currentSubstr)
{
        if (maxSubstr.length() < currentSubstr.length())
                maxSubstr = currentSubstr;
}
