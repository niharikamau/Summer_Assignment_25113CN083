#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program for linear search.\n";
    vector<int> v(5);
    cout << "Enter 5 numbers for array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    int tar = v[0];
    cout << "Enter target: ";
    cin >> tar;
    for (int i = 0; i < v.size(); i++)
    {
        if (tar == v[i])
        {
            cout << "target found at index: " << i;
            return 0;
        }
    }
    cout << "target not found.";

    return 0;
}
