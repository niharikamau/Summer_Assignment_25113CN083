#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int fib(int n);

int main()
{
    cout << "Write a program to Write function for Fibonacci.\n";
    int n;
    cout << "Enter N: ";
    cin >> n;
    cout<<fib(n);
    return 0;
}
int fib(int n)
{
    int prev = 0;
    int next = 1;
    int ans = 0;

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
    return ans;
}