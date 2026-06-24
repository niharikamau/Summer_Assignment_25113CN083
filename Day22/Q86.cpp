#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Count words in a sentence.\n";

    string str;

    cout << "Enter sentence:\n";
    getline(cin, str);

    int words = 0;
    bool insideWord = false;

    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] != ' ' && insideWord == false)
        {
            words++;
            insideWord = true;
        }
        else if(str[i] == ' ')
        {
            insideWord = false;
        }
    }

    cout << "Total words = " << words;

    return 0;
}