#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    
// Q1
    int n = 0;
    cout << "Q1) Write a program to calculate sum of first N natural numbers.\n";
    cout << "Enter N: ";
    cin >> n;
    int i = 1;
    int sum = 0;
    while (i <= n)
    {
        sum += i;
        i++;
    }
    cout << "ANS: " << sum;
        return 0;
}