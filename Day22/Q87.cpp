#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Character frequency.\n";

    string str;
    char ch;

    cout << "Enter string:\n";
    getline(cin, str);

    cout << "Enter character:\n";
    cin >> ch;

    int count = 0;

    for(int i=0;i<str.size();i++)
    {
        if(str[i] == ch)
            count++;
    }

    cout << "Frequency = " << count;

    return 0;
}