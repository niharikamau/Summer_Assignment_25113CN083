#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to find maximum fequency number in array.\n";
    unordered_map<int,int> mp;
    vector<int> v(5);
    cout<<"Enter 5 elements for array:\n";
    for( int i =0; i< 5; i++){
        cin>>   v[i];
        mp[v[i]]++;

    }
    int best = 0;
    int ans;
    for(auto i: mp){
        if(i.second>best){
            ans = i.first;
            best = i.second;
        }
    }

    cout<< "maximum freq number is " <<ans;
    return 0;
}