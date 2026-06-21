#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Find string length without strlen().\n";

    string str;

    cout << "Enter string:\n";
    getline(cin, str);

    int count = 0;

    for(char ch : str)
        count++;

    cout << "Length of string is: " << count;

    return 0;
}