#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to count even and odd elements of array.\n";
    vector<int> v(5);
    cout << "Enter 5 numbers for array:\n";
    int even = 0;
    int odd = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
        if (v[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "even: " << even << "\n";
    cout << "odd: " << odd;

    return 0;
}
