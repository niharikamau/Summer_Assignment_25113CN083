#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Find GCD of two numbers.\n";
    int divisor = 0;
    int dividend = 0;
    cout << "Enter first number: ";
    cin >> divisor;
    cout << "Enter second number: ";
    cin >> dividend;

    if (dividend < divisor)
        swap(dividend, divisor);

    while (divisor != 0)
    {
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    cout << dividend;
    return 0;
}