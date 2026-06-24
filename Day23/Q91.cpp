#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Check anagram strings.\n";

    string str1, str2;

    cout << "Enter first string:\n";
    getline(cin, str1);

    cout << "Enter second string:\n";
    getline(cin, str2);

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1 == str2)
        cout << "Strings are anagrams";
    else
        cout << "Strings are not anagrams";

    return 0;
}