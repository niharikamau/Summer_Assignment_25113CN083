#include <iostream>
using namespace std;

int main()
{
    cout << "Write a program to print character pyramid.\n";
    char ch = 'A';

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            cout << " ";
        }
        for (int n = 1; n <= i; n++)
        {
            cout << ch;
            ch++;
        }
        ch--;
        for (int j = i - 1; j > 0; j--)
        {
            ch--;
            cout << ch;
        }
        ch = 'A';

        cout << '\n';
    }

    return 0;
}
