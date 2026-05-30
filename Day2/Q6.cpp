#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n = 0;

    cout << "\nQ6) Write a program to reverse a number.\n";
    cout << "Enter N: ";
    cin >> n;
    int ans = 0;

    if (n < 0)
    {
        n = -n;
        while (n > 0)
        {
            int digi = n % 10;
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digi > 7))
                cout << "invalid";
            else if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digi < -8))
                cout << "invalid";
            ans = ans * 10 + digi;
            n /= 10;
        }
        cout << "ANS: " << -ans;
    }
    else
    {
        while (n > 0)
        {
            int digi = n % 10;
            if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digi > 7))
                cout << "invalid";
            else if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digi < -8))
                cout << "invalid";
            ans = ans * 10 + digi;
            n /= 10;
        }
        cout << "ANS: " << ans;
    }
        return 0;
}