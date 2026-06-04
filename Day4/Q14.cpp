#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to write nth Fibonacci term.\n";
    int prev = 0;
    int next = 1;
    int n = 0;
    int ans = 0;
    cout << "Enter N: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
            ans = i;
        }
        else
        {
            int curr = prev + next;
            ans = curr;
            prev = next;
            next = curr;
        }
    }
    cout << ans << " is the ans";
    return 0;
}