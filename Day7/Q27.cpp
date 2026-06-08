#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
        return 0;

    return (n % 10) + sum(n / 10);
}
int main()
{
    cout << "Write a program to find recursive sum of digits.\n";

    int n;
    cout << "Enter N: ";
    cin >> n;
    if (n < 0)
        cout << "invalid";
    else
        cout << sum(n);

    return 0;
}