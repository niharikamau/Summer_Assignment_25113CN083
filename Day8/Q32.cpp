#include <iostream>
using namespace std;

int main()
{
    cout << "Write a program to print repeated-number pattern.\n";

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << "\n";
    }

    return 0;
}