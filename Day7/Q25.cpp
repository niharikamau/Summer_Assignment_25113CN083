#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * fac(n - 1);
}
int main()
{
    cout << "Write a program to find Recursive factorial.\n";
    int n;
    cout << "Enter N: ";
    cin >> n;
    if (n < 0)
        cout << "invalid";
    else
    {
        cout << fac(n);
    }

    return 0;
}
