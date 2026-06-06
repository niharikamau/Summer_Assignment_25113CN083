#include <iostream>
using namespace std;

int main() {
    cout << "Write a program to Convert binary to a decimal.\n";
    int n = 0;
    cout << "Enter N: ";
    cin >> n;

    int decimal = 0;
    int power = 1;

    while (n > 0) {
        int lastDigit = n % 10;
        decimal += lastDigit * power;

        power *= 2;
        n /= 10;
    }

    cout << "ans: "<< decimal;
    return 0;
}