#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to remove duplicates in array.\n";
    set<int> st;
    vector<int> v(5);
    cout<<"Enter 5 elements for array:\n";
    for( int i =0; i< 5; i++){
        cin>>   v[i];
        st.insert(v[i]);
    }
    cout<<"the altered array is:\n";
    for(auto i: st){
            cout<<i<<" ";
    }

    return 0;
}