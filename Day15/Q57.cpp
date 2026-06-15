#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Reverse array..\n";
    vector<int> v(5);

    cout << "Enter 5 numbers for array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < v.size() / 2; i++)
    {
        swap(v[i], v[v.size() - 1 - i]);
    }
    cout << "ans: \n";
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}
