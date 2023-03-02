#include "Test.h"
#include <string>
#include <iostream>

using namespace std;

Test operator++(Test& test)
{
    test = static_cast<Test>(static_cast<int>(test) + 1);
    return static_cast<int>(test) >= static_cast<int>(Test::Max) ? test = Test::Min+1 : test;
}
Test operator++(Test& test, int)
{
    Test a = test; 
    test = static_cast<Test>(static_cast<int>(test) + 1);
    return static_cast<int>(test) >= static_cast<int>(Test::Max) ? a = Test::Min+1 : test;
}
Test operator+(Test test , int a)
{
    return static_cast<int>(test) + a >= static_cast<int>(Test::Max) ? Test::Min+1 : static_cast<Test>(static_cast<int>(test) + a);
}
Test operator+(int a, Test test)
{
    return static_cast<int>(test) + a >= static_cast<int>(Test::Max) ? Test::Min+1 : static_cast<Test>(static_cast<int>(test) + a);
}
Test operator-(Test test, int a) 
{
    return static_cast<int>(test) - a <= static_cast<int>(Test::Min) ? Test::Max + 1 : static_cast<Test>(static_cast<int>(test) - a);
}
void print(Test test) 
{
    string Days[3] = { "Bmw", "Mercedes", "lada filanda" };
    if (test == Test::Min || test == Test::Max){}
    else
        cout << Days[static_cast<int>(test) - 1] << std::endl;
}