#include <iostream>
using namespace std;

bool prime(int n);

int main()
{
    cout << "Write a program to write function to check prime.\n";
    int n;
    cout << "Enter n: ";
    cin >> n;

    cout << "ans: ";
    if (prime(n))
        cout << "true";
    else
        cout << "false";

    return 0;
}
bool prime(int n)
{
    if (n <= 1)
        return false;
    else if (n == 2)
        return true;
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                return false;
        }
        return true;
    }
}
