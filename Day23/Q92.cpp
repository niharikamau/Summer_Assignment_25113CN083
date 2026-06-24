#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Find maximum occurring character.\n";

    string str;

    cout << "Enter string:\n";
    getline(cin, str);

    unordered_map<char,int> mp;

    for(char ch : str)
        mp[ch]++;

    char ans;
    int maxi = 0;

    for(auto i : mp)
    {
        if(i.second > maxi)
        {
            maxi = i.second;
            ans = i.first;
        }
    }

    cout << "Maximum occurring character is: " << ans;

    return 0;
}