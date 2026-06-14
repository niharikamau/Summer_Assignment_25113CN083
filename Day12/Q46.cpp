#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool arm(int n);

int main()
{
    cout << "Write a program to Write function for Armstrong.\n";
    int n;
    cout << "Enter N: ";
    cin >> n;
    if (arm(n))
        cout << "yes";
    else
        cout << "no";
    return 0;
}
bool arm(int n)
{
    int x = n;
    int digi = 0;
    int sum = 0;
    if (x < 0)
        return false;

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
        return true;
    }
    else
    {
        return false;
    }
}