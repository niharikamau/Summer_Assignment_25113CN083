#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to move zeros to end.\n";
    vector<int> v(5);

    cout << "Enter 5 numbers for array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    int l = 0;
    int r = v.size() - 1;
    while (l < r)
    {
        if (v[l] == 0 && v[r] != 0)
        {
            swap(v[l], v[r]); // no reverse function in my stl
        }
        else if (v[l] != 0 && v[r] != 0)
        {
            l++;
        }
        else if (v[l] == 0 && v[r] == 0)
        {
            r--;
        }
        else
        {
            l++;
            r--;
        }
    }

    cout << "ans: \n";
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}
