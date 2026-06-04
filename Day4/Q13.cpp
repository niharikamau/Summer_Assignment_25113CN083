#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to generate Fibonacci series.\n";
    int prev = 0;
    int next = 1;
    int n = 0;
    cout << "Enter N: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == 1)
        {
            cout << i << endl;
        }
        else
        {
            int curr = prev + next;
            cout << curr << endl;
            prev = next;
            next = curr;
        }
    }

    return 0;
}