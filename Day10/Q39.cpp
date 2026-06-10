#include <iostream>
using namespace std;

int main()
{
    cout << "Write a program to print number pyramid.\n";
    int n=1;

    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j <= 5-i; j++)
        {
            cout << " ";
        }
        for (n = 1; n <= i; n++)
        {
            cout<<n;
        }
        for ( int j = i-1; j > 0; j--)
        {
            cout<<j;
        }
        
        cout<<'\n';
    }

    return 0;
}
