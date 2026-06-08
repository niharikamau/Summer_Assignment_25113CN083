#include <iostream>
using namespace std;

int main()
{
    cout << "Write a program to print a character triangle.\n";
    char ch = 'A';

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << "\n";
        ch = 'A';
    }

    return 0;
}