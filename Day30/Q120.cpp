#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void display(string name[], int marks[], int n)
{
    cout << "\nStudent Records\n";

    for(int i=0;i<n;i++)
    {
        cout << "Name : " << name[i] << endl;
        cout << "Marks : " << marks[i] << endl;
        cout << endl;
    }
}

int main()
{
    cout << "Write a program to Develop complete mini project using arrays, strings and functions.\n";

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

    display(name, marks, 3);

    return 0;
}