#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n = 0;

    cout << "\nQ7) Write a program to find product of digits.\n";
    cout << "Enter N: ";
    cin >> n;
    int ans = 1;
    if (n < 0)
        n = -n;
    while (n > 0)
    {
        int digi = n % 10;
        ans = ans * digi;
        n /= 10;
    }
    cout << "ANS: " << ans;
    return 0;
}