#pragma once
enum class Test
{	min,
	bmw,
	mercedes,
	lada,
	max
};
Test& operator++(Test&);
Test& operator++(Test&, int);
Test operator+(Test, int);
Test operator+(int, Test);
void print(Test&);



