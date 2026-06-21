#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Selection sort.\n";

    int a[5];

    cout << "Enter 5 elements:\n";

    for(int i=0;i<5;i++)
        cin >> a[i];

    for(int i=0;i<4;i++)
    {
        int minIndex = i;

        for(int j=i+1;j<5;j++)
        {
            if(a[j] < a[minIndex])
                minIndex = j;
        }

        swap(a[i],a[minIndex]);
    }

    cout << "Sorted array is:\n";

    for(int i=0;i<5;i++)
        cout << a[i] << " ";

    return 0;
}