#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to find largest and smallest element of array.\n";
    vector<int> v(5);
    cout << "Enter 5 numbers for array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    cout << "largest: " << *max_element(v.begin(), v.end()) << "\n";
    cout << "smallest: " << *min_element(v.begin(), v.end());

    return 0;
}
