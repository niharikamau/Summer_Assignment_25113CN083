#include <iostream>
using namespace std;

int max(int n1, int n2);

int main()
{
    cout << "Write a program to write function to find maximum.\n";
    int n1, n2;
    cout << "Enter n1: ";
    cin >> n1;
    cout << "Enter n2: ";
    cin >> n2;

    cout << "ans: " << max(n1, n2);

    return 0;
}
int max(int n1, int n2)
{
    if (n1 >= n2)
        return n1;
    else
        return n2;
}
