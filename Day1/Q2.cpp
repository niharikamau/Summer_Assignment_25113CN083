
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;

    cout << "Q2) Write a program to print multiplication table of a given number.\n";
    cout << "Enter N: ";
    cin >> n;
    int i = 1;

    while (i < 11)
    {
        int ans = n * i;
        cout << n << " x " << i << " = " << ans << "\n";
        i++;
    }
    return 0;
}