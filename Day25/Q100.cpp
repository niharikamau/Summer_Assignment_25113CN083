#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Write a program to Sort words by length.\n";

    vector<string> words(5);

    cout<<"Enter 5 words:\n";

    for(int i=0;i<5;i++)
        cin>>words[i];

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            if(words[j].size()>words[j+1].size())
                swap(words[j],words[j+1]);
        }
    }

    cout<<"Words after sorting:\n";

    for(auto i:words)
        cout<<i<<endl;

    return 0;
}