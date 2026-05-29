#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Q5
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

    // Q6
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
    // Q7
    cout << "\nQ7) Write a program to find product of digits.\n";
    cout << "Enter N: ";
    cin >> n;
    ans = 1;
    if (n < 0)
        n = -n;
    while (n > 0)
    {
        int digi = n % 10;
        ans = ans * digi;
        n /= 10;
    }
    cout << "ANS: " << ans;

    // Q8
    cout << "\nQ8) Write a program to check whether a number is palindrome.\n";
    cout << "Enter N: ";
    cin >> n;
    sum = 0;

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