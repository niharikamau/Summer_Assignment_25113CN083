#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n = 0;

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
    return 0;
}