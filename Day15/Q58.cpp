#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Rotate array left.\n";
    vector<int> v(5);

    cout << "Enter 5 numbers for array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    int temp = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        v[i - 1] = v[i];
    }
    v[v.size() - 1] = temp;
    cout << "ans: \n";
    for (auto i : v)
    {
        cout << i << " ";
    }
    return 0;
}
