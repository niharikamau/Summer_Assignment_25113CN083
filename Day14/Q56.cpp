#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to find duplicates in an array.\n";
    vector<int> v(5);
    set<int> ans;
    set<int> st;
    cout << "Enter 5 numbers for array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (st.find(v[i]) != st.end())
        {
            ans.insert(v[i]);
        }
        else
        {
            st.insert(v[i]);
        }
    }
    cout << "duplicates: \n";
    for (auto i : ans)
    {
        cout << i << " ";
    }
    return 0;
}
