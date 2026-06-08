#include <iostream>
using namespace std;

int fib(int n)
{
    if (n == 0)
        return 0;

    if (n == 1)
        return 1;

    return fib(n - 1) + fib(n - 2);
}
int main()
{
    cout << "Write a program to find recursive fibonacci.\n";

    int n;
    cout << "Enter N: ";
    cin >> n;
    if (n < 0)
        cout << "Invalid";
    else
        cout << fib(n);

    return 0;
}