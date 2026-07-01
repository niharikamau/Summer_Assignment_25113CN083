#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create mini employee management system.\n";

    string name[3];
    float salary[3];

    cout << "Enter details of 3 employees:\n";

    for(int i=0;i<3;i++)
    {
        cout << "Enter Name: ";
        cin >> name[i];

        cout << "Enter Salary: ";
        cin >> salary[i];
    }

    cout << "\nEmployee Details\n";

    for(int i=0;i<3;i++)
    {
        cout << "Employee : " << name[i] << endl;
        cout << "Salary : " << salary[i] << endl;
        cout << endl;
    }

    return 0;
}