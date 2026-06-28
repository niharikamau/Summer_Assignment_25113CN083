#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create quiz application.\n";

    int score = 0;
    char ans;

    cout << "Q1. Capital of India?\n";
    cout << "a) Delhi\nb) Mumbai\nc) Chennai\n";
    cin >> ans;

    if(ans == 'a' || ans == 'A')
        score++;

    cout << "\nQ2. 5 + 7 = ?\n";
    cout << "a) 10\nb) 12\nc) 14\n";
    cin >> ans;

    if(ans == 'b' || ans == 'B')
        score++;

    cout << "\nQ3. C++ was developed by?\n";
    cout << "a) Dennis Ritchie\nb) James Gosling\nc) Bjarne Stroustrup\n";
    cin >> ans;

    if(ans == 'c' || ans == 'C')
        score++;

    cout << "\nYour Score = " << score << "/3";

    return 0;
}