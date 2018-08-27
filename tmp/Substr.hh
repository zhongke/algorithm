#pragma once

#include <string>

class Substr
{
public:
        Substr() {}
        ~Substr() {}

        std::string getMaxLengthStr(const std::string& str);
private:
        bool existDuplicateChar(const std::string& substr, const char currentChar);
        void setMax(const std::string& currentSubstr);

        std::string maxSubstr;
};
