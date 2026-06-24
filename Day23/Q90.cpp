#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Find first repeating character.\n";

    string str;

    cout << "Enter string:\n";
    getline(cin, str);

    set<char> st;

    for(char ch : str)
    {
        if(st.count(ch))
        {
            cout << "First repeating character is: " << ch;
            return 0;
        }

        st.insert(ch);
    }

    cout << "No repeating character found";

    return 0;
}