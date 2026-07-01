#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create inventory management system.\n";

    string item;
    int quantity;
    float price;

    cout<<"Enter Item Name:\n";
    cin>>item;

    cout<<"Enter Quantity:\n";
    cin>>quantity;

    cout<<"Enter Price per Item:\n";
    cin>>price;

    cout<<"\nInventory Details\n";
    cout<<"Item : "<<item<<endl;
    cout<<"Quantity : "<<quantity<<endl;
    cout<<"Price : "<<price<<endl;
    cout<<"Total Value : "<<quantity*price<<endl;

    return 0;
}