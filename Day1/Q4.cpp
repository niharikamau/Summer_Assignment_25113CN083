#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cout << "Q4) Write a program to count digits in a number.\n";
    cout << "Enter N: ";
    cin >> n;
    int digi = 0;
    if (n < 0)
        n = -n;
    while (n > 0)
    {
        digi++;
        n /= 10;
    }
    cout << "Digits: " << digi;
    return 0;
}