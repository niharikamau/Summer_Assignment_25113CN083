 #include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n = 0;

     cout << "\nQ8) Write a program to check whether a number is palindrome.\n";
    cout << "Enter N: ";
    cin >> n;
    int sum = 0;

    if (n < 0 || (n % 10 == 0 && n != 0))
        cout << "NO";
    else
    {
        int rev = 0;
        while (n > rev)
        {
            int digi = n % 10;
            rev = rev * 10 + digi;
            n /= 10;
        }
        if ((rev == n) || (n == rev / 10))
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}