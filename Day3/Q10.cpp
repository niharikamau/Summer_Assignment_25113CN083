#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    int flg = 0;
    if (n < 2)
        return false;
    else if (n == 2)
        return true;
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
                flg = 1;
        }
        if (flg == 0)
            return true;
        else
            return false;
    }
    
}

int main()
{
    cout << "Write a program to print prime numbers in a range.\n";
    int l = 0, u=0;
    cout << "Enter lower bound: ";
    cin >> l;
    cout << "Enter upper bound: ";
    cin >> u;

    for(int i =l; i<=u; i++){
        if(isPrime(i)) cout<<i<<"\n";
    }
    return 0;
}
