#include <iostream>
using namespace std;

int main()
{
    cout << "Write a program to print reverse number.\n";
    int n =1;

    for (int i = 1; i < 6; i++)
    {
        for (int j = i; j < 6; j++)
        {
            cout << n;
            n++;
        }
        cout << "\n";
        n=1;
    }

    return 0;
}