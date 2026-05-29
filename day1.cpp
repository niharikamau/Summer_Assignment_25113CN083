#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Q1
    int n = 0;
    cout << "Q1) Write a program to calculate sum of first N natural numbers.\n";
    cout << "Enter N: ";
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "ANS: " << sum;

    // Q2
    cout << "\nQ2) Write a program to print multiplication table of a given number.\n";
    cout << "Enter N: ";
    cin >> n;
    i = 1;

    while (i < 11)
    {
        int ans = n * i;
        cout << n << " x " << i << " = " << ans << "\n";
        i++;
    }

    // Q3
    cout << "Q3) Write a program to find factorial of a number.\n";
    cout << "Enter N: ";
    cin >> n;
    int ans = 1;

    while (n > 0)
    {
        ans = ans * n;
        n--;
    }
    cout << "Factorial: " << ans;

    // Q4
    cout << "\nQ4) Write a program to count digits in a number.\n";
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