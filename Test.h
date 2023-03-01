#pragma once
enum class Test
{	Min,
	bmw,
	mercedes,
	lada,
	Max
};
Test operator++(Test&);
Test operator++(Test&, int);
Test operator+(Test, int);
Test operator+(int, Test);
void print(Test);



