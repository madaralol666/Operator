#pragma once
enum class Test
{
bmw,
mercedes,
lada
};
Test& operator++(Test&);
Test& operator++(Test&, int);
Test operator+(Test, int);

