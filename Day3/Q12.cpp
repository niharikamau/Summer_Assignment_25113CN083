#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getGCD(int divisor,  int dividend){
    if (dividend < divisor)
        swap(dividend, divisor);

    while (divisor != 0)
    {
        int remainder = dividend % divisor;
        dividend = divisor;
        divisor = remainder;
    }
    return dividend;
}
int main()
{
    cout << "Write a program to Find LCM of two numbers.\n";
    int first =0, second =0;
    cout << "Enter first number: ";
    cin >> first;
    cout << "Enter second number: ";
    cin >> second;

    int ans = (first*second)/getGCD(first,second);
    cout<<ans;
    return 0;
}