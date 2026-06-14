#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to find frequency of an element.\n";
    vector<int> v(5);
    cout << "Enter 5 numbers for array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    int tar = v[0];
    cout << "Enter target: ";
    cin >> tar;
    int freq = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (tar == v[i])
        {
            freq++;
        }
    }
    cout << "frequency of element: " << freq;

    return 0;
}
