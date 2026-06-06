#include <iostream>
using namespace std;

int main() {
    cout << "Write a program to Count set bits in a number.\n";
    int n = 0;
    cout << "Enter N: ";
    cin >> n;
    int count = 0;

    while (n > 0) {
        if (n & 1) {
            count++;
        }
        n = n >> 1;
    }

    cout << "ans: "<< count;
    return 0;
}