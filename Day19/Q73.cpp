#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Add matrices.\n";

    int a[2][2], b[2][2], c[2][2];

    cout << "Enter first matrix:\n";

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin >> a[i][j];

    cout << "Enter second matrix:\n";

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            cin >> b[i][j];

    for(int i=0;i<2;i++)
        for(int j=0;j<2;j++)
            c[i][j] = a[i][j] + b[i][j];

    cout << "Result matrix:\n";

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
            cout << c[i][j] << " ";

        cout << endl;
    }

    return 0;
}