#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Remove spaces from string.\n";

    string str;
    string ans = "";

    cout << "Enter string:\n";
    getline(cin, str);

    for(int i=0;i<str.size();i++)
    {
        if(str[i] != ' ')
            ans += str[i];
    }

    cout << "String after removing spaces:\n";
    cout << ans;

    return 0;
}