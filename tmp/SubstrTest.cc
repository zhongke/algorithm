#include "gmock/gmock.h"
#include "Substr.hh"

using namespace std;
using namespace testing;

class ASubstr : public Test
{
public:
        Substr str;
        string input;
        string output;
};

TEST_F(ASubstr, NoDuplicateChar)
{
        input  = "abcd";
        output = "abcd";

        ASSERT_THAT(str.getMaxLengthStr(input), Eq(output));
}

TEST_F(ASubstr, DuplicateCharAtBegining)
{
        input  = "aabcd";
        output = "abcd";

        ASSERT_THAT(str.getMaxLengthStr(input), Eq(output));
}

TEST_F(ASubstr, DuplicateCharInTheMiddleWithMaxLength)
{
        input  = "abcddef";
        output = "abcd";

        ASSERT_THAT(str.getMaxLengthStr(input), Eq(output));
}

TEST_F(ASubstr, DuplicateCharInTheEndWithMaxLength)
{
       input  = "abcdd";
       output = "abcd";

       ASSERT_THAT(str.getMaxLengthStr(input), Eq(output));
}


TEST_F(ASubstr, DuplicateCharWithDifferentLength)
{
       input  = "ceabcdabhijklmnmced";
       output = "cdabhijklmn";

       ASSERT_THAT(str.getMaxLengthStr(input), Eq(output));
}
