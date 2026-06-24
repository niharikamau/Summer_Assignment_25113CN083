#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Check palindrome string.\n";

    string str;

    cout << "Enter string:\n";
    getline(cin, str);

    int l =0;
    int r = str.size()-1;
    while (l<r)
    {
        if(str[l]!=str[r]){
            cout<<"no";
            return 0;
        }

        l++;
        r--;
    }
    cout<<"yes";
    return 0;
}