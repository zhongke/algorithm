#include "gmock/gmock.h"
#include "Substr.hh"

using namespace testing;

class ASubstr : public Test
{
public:
        Substr str;
};

TEST_F(ASubstr, NormalInput)
{
        ASSERT_THAT(str.getMaxLengthStr("abdcdccae"), Eq("abdc"));
}


