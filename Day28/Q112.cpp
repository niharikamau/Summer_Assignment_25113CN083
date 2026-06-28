#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create contact management system.\n";

    string name;
    long long mobile;
    string email;

    cout << "Enter Name:\n";
    cin >> name;

    cout << "Enter Mobile Number:\n";
    cin >> mobile;

    cout << "Enter Email:\n";
    cin >> email;

    cout << "\nContact Details\n";
    cout << "Name : " << name << endl;
    cout << "Mobile : " << mobile << endl;
    cout << "Email : " << email << endl;

    return 0;
}