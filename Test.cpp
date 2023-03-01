#include "Test.h"
#include <string>
#include <iostream>

using namespace std;

Test& operator++(Test& test)
{
    test = static_cast<Test>(static_cast<int>(test) + 1);
    if (static_cast<int>(test) >= static_cast<int>(Test::max))
        return test = Test::min;
    return test;
}
Test& operator++(Test& test, int)
{
    Test a = test;
    test = static_cast<Test>(static_cast<int>(test) + 1);
    if (static_cast<int>(test) >= static_cast<int>(Test::max))
        return test = Test::min;
    return test;
}
Test operator+(Test test, int a)
{
    if (static_cast<int>(test) + a >= static_cast<int>(Test::max))
        return test = Test::min;
    return static_cast<Test>(static_cast<int>(test) + a);
}
Test operator+(int a, Test test)
{
    if (static_cast<int>(test) + a >= static_cast<int>(Test::max))
        return test = Test::min;
    return static_cast<Test>(static_cast<int>(test) + a);
};

void print(Test& test) 
{
    string Days[3] = { "Bmw", "Mercedes", "lada filanda" };
    if (test == Test::min || test == Test::max)
    {
    }
    else
    {
        cout << Days[static_cast<int>(test) - 1] << std::endl;
    }
}