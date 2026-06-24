#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Find first non-repeating character.\n";

    string str;

    cout << "Enter string:\n";
    getline(cin, str);

    unordered_map<char,int> mp;

    for(char ch : str)
        mp[ch]++;

    for(char ch : str)
    {
        if(mp[ch] == 1)
        {
            cout << "First non-repeating character is: " << ch;
            return 0;
        }
    }

    cout << "No non-repeating character found";

    return 0;
}