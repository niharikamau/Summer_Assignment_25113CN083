#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Rotate array right.\n";
    vector<int> v(5);

    cout << "Enter 5 numbers for array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    int temp = v[v.size() - 1];
    for (int i = v.size() - 2; i >= 0; i--)
    {
        v[i + 1] = v[i];
    }
    v[0] = temp;
    cout << "ans: \n";
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}
