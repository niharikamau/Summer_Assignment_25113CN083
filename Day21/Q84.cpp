#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Convert lowercase to uppercase.\n";

    string str;

    cout << "Enter string:\n";
    getline(cin, str);

    for(int i=0;i<str.size();i++)
        str[i] = toupper(str[i]);

    cout << "Converted string is:\n";
    cout << str;

    return 0;
}