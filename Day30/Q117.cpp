#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create student record system using arrays and strings.\n";

    string name[3];
    int marks[3];

    cout << "Enter details of 3 students:\n";

    for(int i=0;i<3;i++)
    {
        cout << "Enter Name: ";
        cin >> name[i];

        cout << "Enter Marks: ";
        cin >> marks[i];
    }

    cout << "\nStudent Records\n";

    for(int i=0;i<3;i++)
    {
        cout << "Name : " << name[i] << endl;
        cout << "Marks : " << marks[i] << endl;
        cout << endl;
    }

    return 0;
}