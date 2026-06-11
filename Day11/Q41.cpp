#include <iostream>
using namespace std;

int add(int n1, int n2);

int main()
{
    cout << "Write a program to write function to find sum of two numbers.\n";

    int n1, n2;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;

    cout << "ans: " << add(n1, n2);

    return 0;
}
int add(int n1, int n2)
{
    return n1 + n2;
}
