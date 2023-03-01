#include <iostream>
#include "Test.h"
using namespace std;
int main()
{
    Test a = Test::lada;
    print(operator++(a, 1));
    
}
