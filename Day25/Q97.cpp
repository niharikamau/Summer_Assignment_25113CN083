#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Merge two sorted arrays.\n";

    int a[5], b[5], c[10];

    cout << "Enter 5 sorted elements for first array:\n";
    for(int i=0;i<5;i++)
        cin>>a[i];

    cout << "Enter 5 sorted elements for second array:\n";
    for(int i=0;i<5;i++)
        cin>>b[i];

    int i=0,j=0,k=0;

    while(i<5 && j<5)
    {
        if(a[i]<b[j])
            c[k++]=a[i++];
        else
            c[k++]=b[j++];
    }

    while(i<5)
        c[k++]=a[i++];

    while(j<5)
        c[k++]=b[j++];

    cout<<"Merged array is:\n";

    for(int i=0;i<10;i++)
        cout<<c[i]<<" ";

    return 0;
}