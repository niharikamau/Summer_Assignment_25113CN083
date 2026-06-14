#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Input and display array.\n";
    vector<int> v(5);
    cout << "Enter 5 numbers for array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    cout << "here is your array:\n";
    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}
