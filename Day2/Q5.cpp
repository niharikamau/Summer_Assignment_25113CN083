 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cout << "Q5) Write a program to calculate sum of digits of a number.\n";
    cout << "Enter N: ";
    cin >> n;
    int sum = 0;
    while (n > 0)
    {
        int digi = n % 10;
        sum += digi;
        n /= 10;
    }
    cout << "ANS: " << sum;
        return 0;
}