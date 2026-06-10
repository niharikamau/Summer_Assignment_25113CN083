#include <iostream>
using namespace std;

int main()
{
    cout << "Write a program to print reverse star pyramid.\n";

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            cout << " ";
        }
        cout << '*';
        for (int k = 1; k <= 10 - 2 * i; k++)
        {
            cout << '*';
        }
        cout << '\n';
    }

    return 0;
}
