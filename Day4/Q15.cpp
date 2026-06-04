#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to check Armstrong number.\n";

    int n = 0;

    cout << "Enter N: ";
    cin >> n;
    int x = n;
    int digi = 0;
    int sum = 0;

    while (x > 0)
    {
        digi++;
        x /= 10;
    }
    x = n;
    while (x > 0)
    {
        int last_digit = x % 10;
        sum += pow(last_digit, digi);
        x /= 10;
    }
    if (sum == n)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}