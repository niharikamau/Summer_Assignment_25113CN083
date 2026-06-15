#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to find pair with given sum.\n";
    set<int> st;
    vector<int> v(5);

    int sum;
    int ans = 0;
    int ans2 = 0;

    cout << "Enter 5 elements for array:\n";
    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }
    cout << "enter sum: ";
    cin >> sum;

    for (auto i : v)
    {
        if (st.find(i) != st.end())
        {
            ans = i;
            ans2 = max(sum, i) - min(sum, i);
            cout << "the pair is " << ans << " and " << ans2;

            return 0;
        }
        else
        {
            st.insert(max(sum, i) - min(sum, i));
        }
    }

    cout << "pair not found";

    return 0;
}