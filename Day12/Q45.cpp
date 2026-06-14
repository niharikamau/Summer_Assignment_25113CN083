#include <iostream>
using namespace std;

bool pal(string n);

int main()
{
    cout << "Write a program to Write function for palindrome.\n";
    string n;
    cout << "Enter a word: ";
    cin >> n;
    if (pal(n))
        cout << "yes";
    else
        cout << "no";
    return 0;
}
bool pal(string n)
{
    int l = 0;
    int r = n.size() - 1;
    while (l < r)
    {
        if (n[l] != n[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}