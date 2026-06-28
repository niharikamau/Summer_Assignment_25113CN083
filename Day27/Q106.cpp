#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create employee management system.\n";

    string name;
    int id;
    float salary;

    cout << "Enter employee name:\n";
    cin >> name;

    cout << "Enter employee ID:\n";
    cin >> id;

    cout << "Enter salary:\n";
    cin >> salary;

    cout << "\nEmployee Details\n";
    cout << "Name : " << name << endl;
    cout << "Employee ID : " << id << endl;
    cout << "Salary : " << salary << endl;

    return 0;
}