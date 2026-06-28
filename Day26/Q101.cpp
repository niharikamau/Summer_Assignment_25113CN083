#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create number guessing game.\n";

    srand(time(0));

    int number = rand() % 100 + 1;
    int guess;

    cout << "Guess a number between 1 and 100:\n";

    do
    {
        cin >> guess;

        if(guess > number)
            cout << "Too High!\n";
        else if(guess < number)
            cout << "Too Low!\n";
        else
            cout << "Correct Guess!\n";

    } while(guess != number);

    return 0;
}