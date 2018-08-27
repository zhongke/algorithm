#include <iostream>
#include <string>

#include "Substr.hh"

using namespace std;


string Substr::getMaxLengthStr(const string& str)
{
   int begin, end, length;
   string temp, result;
   char current;
   bool existed{false};
   for (int i = 0; i < str.length(); ++i) {
       current = str.at(i);

       if (i == 0) {
          temp = current;
          length = 1;
          begin = end = i;
       } else {
          end = i;
          for (int j = 0; j < temp.length(); ++j) {
             if (current == temp.at(j)) {
                existed = true;
                break;
             } else {
                existed = false;
                length++;
             }
          }
       }

       if (!existed) {
          if (i > 0) {
             temp += current;
          }
       } else {
          if (end - begin > length) {
             temp = current;
             begin = i;
             length = 1;
          }
       }
   }

   return temp;
}
