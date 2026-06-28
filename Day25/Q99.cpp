#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Write a program to Sort names alphabetically.\n";

    vector<string> names(5);

    cout<<"Enter 5 names:\n";

    for(int i=0;i<5;i++)
        cin>>names[i];

    sort(names.begin(),names.end());

    cout<<"Names after sorting:\n";

    for(auto i:names)
        cout<<i<<endl;

    return 0;
}