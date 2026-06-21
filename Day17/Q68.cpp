#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Find common elements.\n";

    int a[5], b[5];

    cout << "Enter 5 elements for first array:\n";
    for(int i=0;i<5;i++)
        cin >> a[i];

    cout << "Enter 5 elements for second array:\n";
    for(int i=0;i<5;i++)
        cin >> b[i];

    cout << "Common elements are:\n";

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(a[i] == b[j])
            {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}