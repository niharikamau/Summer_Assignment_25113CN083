#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create ticket booking system.\n";

    string name;
    int tickets;
    float price = 250;
    float total;

    cout << "Enter Customer Name:\n";
    cin >> name;

    cout << "Enter Number of Tickets:\n";
    cin >> tickets;

    total = tickets * price;

    cout << "\nBooking Details\n";
    cout << "Customer : " << name << endl;
    cout << "Tickets : " << tickets << endl;
    cout << "Total Amount : " << total << endl;

    return 0;
}