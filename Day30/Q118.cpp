#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create mini library system.\n";

    string book[3];

    cout << "Enter names of 3 books:\n";

    for(int i=0;i<3;i++)
        cin >> book[i];

    cout << "\nAvailable Books\n";

    for(int i=0;i<3;i++)
        cout << i+1 << ". " << book[i] << endl;

    return 0;
}