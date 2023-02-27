#include "Test.h"

Test& operator++(Test& test)
{
        test = static_cast<Test>(static_cast<int>(test) + 1);
        return test;
}
Test& operator++(Test& test, int)
{
    Test a = test;
    test = static_cast<Test>(static_cast<int>(test) + 1);
    return a;
}
Test operator+(Test test , int a)
{
    return static_cast<Test>(static_cast<int>(test) + a);
}
;
