#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to check whether a number is prime.\n";
    int n = 0;
    cout << "Enter N: ";
    cin >> n;
    int flg = 0;

    if (n < 2)
        cout << "not prime";
    else if (n == 2)
        cout << "prime";
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                flg = 1;
        }
        if (flg == 0)
            cout << "prime";
        else
            cout << "not prime";
    }

    return 0;
}