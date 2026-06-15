#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to find missing number in array.\n";
    vector<int> v= {2,1,3,5};
    cout<<"for array 2,1,3,5\n";
    int m = *max_element(v.begin(), v.end());
    int sum = m*(m+1)/2;

    for(auto i : v){
        sum -= i;
    }

    cout<< sum;
    return 0;
}