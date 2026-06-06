#include <iostream>
using namespace std;

int main() {
    cout << "Write a program to Find x^n without pow().\n";
    int n = 0;
    cout << "Enter N: ";
    cin >> n;
    int x =0;
    cout << "Enter X: ";
    cin >> x;

    long long ans = 1;

    for (int i = 1; i <= n; i++) {
        ans *= x;
    }

    cout << "ans: "<< ans;
    return 0;
}