#include <iostream>
using namespace std;

int main()
{
    cout << "Write a program to print star pyramid.\n";

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            cout << " ";
        }
        cout << '*';
        for (int k = 1; k <= 2*(i-1); k++)
        {
            cout<<'*';
        }
        cout<<'\n';
    }

    return 0;
}
