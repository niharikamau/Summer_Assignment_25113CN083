#include <iostream>
using namespace std;

int fac(int n);

int main()
{
    cout << "Write a program to write function to find factorial.\n";
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "ans: " << fac(n);
    return 0;
}
int fac(int n)
{
    if (n == 0)
        return 1;
    return n * fac(n - 1);
}
