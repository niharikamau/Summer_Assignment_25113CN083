#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create marksheet generation system.\n";

    string name;
    int m1, m2, m3;
    int total;
    float percentage;

    cout << "Enter student name:\n";
    cin >> name;

    cout << "Enter marks of 3 subjects:\n";
    cin >> m1 >> m2 >> m3;

    total = m1 + m2 + m3;
    percentage = total / 3.0;

    cout << "\nMarksheet\n";
    cout << "Name : " << name << endl;
    cout << "Total Marks : " << total << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    if(percentage >= 40)
        cout << "Result : Pass";
    else
        cout << "Result : Fail";

    return 0;
}