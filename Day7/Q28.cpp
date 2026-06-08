#include <iostream>
using namespace std;

int revNum(int n, int rev)
{
    if (n == 0)
        return rev;

    return revNum(n / 10, rev * 10 + n % 10);
}
int main()
{
    cout << "Write a program to find recursive reverse number.\n";

    int n;
    cout << "Enter N: ";
    cin >> n;
    if (n < 0){
        n=-n;
        cout <<'-'<< revNum(n, 0);
    }
    else{
        cout << revNum(n, 0);
    }    
    return 0;
}