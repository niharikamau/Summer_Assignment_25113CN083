#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create student record management system.\n";

    string name;
    int roll;
    float marks;

    cout << "Enter student name:\n";
    cin >> name;

    cout << "Enter roll number:\n";
    cin >> roll;

    cout << "Enter marks:\n";
    cin >> marks;

    cout << "\nStudent Record\n";
    cout << "Name : " << name << endl;
    cout << "Roll No : " << roll << endl;
    cout << "Marks : " << marks << endl;

    return 0;
}