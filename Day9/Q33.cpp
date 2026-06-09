#include <iostream>
using namespace std;

int main()
{
    cout << "Write a program to print reverse star pattern.\n";

    for (int i = 1; i < 6; i++)
    {
        for (int j = i; j < 6; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}