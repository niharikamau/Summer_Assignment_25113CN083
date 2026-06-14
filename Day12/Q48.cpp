#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool perf(int n);

int main()
{
    cout << "Write a program to Write function for perfect number.\n";
    int n;
    cout << "Enter N: ";
    cin >> n;
    if (perf(n))
        cout << "yes";
    else
        cout << "no";
    return 0;
}
bool perf(int n)
{
    int sum = 0;
    if (n <= 1)
        return false;

    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}