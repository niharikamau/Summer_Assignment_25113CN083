#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Print factors of a number.\n";
    int n = 0;
    cout << "Enter N: ";
    cin >> n;

    if (n < 0)
        cout << "invalid input";
    else if (n == 1)
        cout << 1;
    else if (n == 0)
        cout << "every non-zero number is a factor.";

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
    return 0;
}