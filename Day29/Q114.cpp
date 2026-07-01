#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create menu-driven array operations system.\n";

    vector<int> arr(5);

    cout << "Enter 5 elements:\n";

    for(int i=0;i<5;i++)
        cin>>arr[i];

    int choice;

    cout<<"\n1. Display Array";
    cout<<"\n2. Find Maximum";
    cout<<"\n3. Find Minimum";
    cout<<"\n4. Find Sum";

    cout<<"\nEnter choice:\n";
    cin>>choice;

    switch(choice)
    {
        case 1:
            for(int i:arr)
                cout<<i<<" ";
            break;

        case 2:
            cout<<"Maximum = "<<*max_element(arr.begin(),arr.end());
            break;

        case 3:
            cout<<"Minimum = "<<*min_element(arr.begin(),arr.end());
            break;

        case 4:
        {
            int sum=0;
            for(int i:arr)
                sum+=i;
            cout<<"Sum = "<<sum;
            break;
        }

        default:
            cout<<"Invalid Choice";
    }

    return 0;
}