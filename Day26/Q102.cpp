#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create voting eligibility system.\n";

    int age;

    cout << "Enter age:\n";
    cin >> age;

    if(age >= 18)
        cout << "Eligible for voting.";
    else
        cout << "Not eligible for voting.";

    return 0;
}