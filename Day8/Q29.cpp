#include <iostream>
using namespace std;

int main()
{
    cout << "Write a program to print half a pyramind.\n";

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}