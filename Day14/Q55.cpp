#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to find second largest element.\n";
    vector<int> v(5);
    cout << "Enter 5 numbers for array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    int best = INT_MIN;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] < *max_element(v.begin(), v.end()))
        {
            best = max(best, v[i]);
        }
    }
    cout << "ans: " << best;

    return 0;
}
