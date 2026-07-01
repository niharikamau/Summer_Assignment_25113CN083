#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create menu-driven calculator.\n";

    int choice;
    float a, b;

    cout << "Enter two numbers:\n";
    cin >> a >> b;

    cout << "\n1. Addition";
    cout << "\n2. Subtraction";
    cout << "\n3. Multiplication";
    cout << "\n4. Division";

    cout << "\nEnter your choice:\n";
    cin >> choice;

    switch(choice)
    {
        case 1:
            cout << "Answer = " << a + b;
            break;

        case 2:
            cout << "Answer = " << a - b;
            break;

        case 3:
            cout << "Answer = " << a * b;
            break;

        case 4:
            if(b != 0)
                cout << "Answer = " << a / b;
            else
                cout << "Division by zero not possible.";
            break;

        default:
            cout << "Invalid Choice";
    }

    return 0;
}