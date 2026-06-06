#include <iostream>
using namespace std;

int main() {
    cout << "Write a program to Convert decimal to binary.\n";
    int n = 0;
    cout << "Enter N: ";
    cin >> n;

    string binary = "";

    if (n == 0) binary = "0";

    while (n > 0) {
        binary = char((n % 2) + '0') + binary;
        n /= 2;
    }

    cout << "ans: "<<binary;
    return 0;
}