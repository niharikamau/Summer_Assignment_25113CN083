#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create menu-driven string operations system.\n";

    string str;

    cout<<"Enter string:\n";
    getline(cin,str);

    int choice;

    cout<<"\n1. Find Length";
    cout<<"\n2. Reverse String";
    cout<<"\n3. Convert to Uppercase";

    cout<<"\nEnter choice:\n";
    cin>>choice;

    switch(choice)
    {
        case 1:
            cout<<"Length = "<<str.size();
            break;

        case 2:
            reverse(str.begin(),str.end());
            cout<<str;
            break;

        case 3:
            for(int i=0;i<str.size();i++)
                str[i]=toupper(str[i]);

            cout<<str;
            break;

        default:
            cout<<"Invalid Choice";
    }

    return 0;
}