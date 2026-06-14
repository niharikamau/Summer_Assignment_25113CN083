#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to find sum and average of array.\n";
    vector<int> v(5);
    cout << "Enter 5 numbers for array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    int sum = 0;
    for (auto i : v)
    {
        sum += i;
    }
    cout << "sum of array is: " << sum << "\n";
    cout << "average of array is: " << float(sum) / 5;

    return 0;
}
