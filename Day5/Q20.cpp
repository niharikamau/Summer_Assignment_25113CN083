#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool checkPrime(int k)
{
    for (int i = 2; i < k; i++)
    {
        if (k % i == 0)
            return false;
    }
    return true;
}
int main()
{
    cout << "Write a program to Print factors of a number.\n";
    int n = 0;
    cout << "Enter N: ";
    cin >> n;
    int ans = 0;

    if (n < 0 || n == 1)
        cout << "invalid input";
    else if (n == 0)
        cout << "infinity";

    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            if (checkPrime(i))
            {
                ans = max(i, ans);
            }
        }
    }
    cout << "max prime is " << ans;
    return 0;
}