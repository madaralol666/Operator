#include <iostream>
#include "Test.h"
using namespace std;
int main()
{
    Test a = Test::mercedes;
    print(operator++(a, 1));
    
}
