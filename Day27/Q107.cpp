#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create salary management system.\n";

    string name;
    float basic, bonus, total;

    cout << "Enter employee name:\n";
    cin >> name;

    cout << "Enter basic salary:\n";
    cin >> basic;

    cout << "Enter bonus:\n";
    cin >> bonus;

    total = basic + bonus;

    cout << "\nSalary Details\n";
    cout << "Employee : " << name << endl;
    cout << "Total Salary : " << total << endl;

    return 0;
}