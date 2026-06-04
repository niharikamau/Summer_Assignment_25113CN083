#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getArmstrong( int n){
    int x = n;
    int digi = 0;
    int sum = 0;

    while (x > 0)
    {
        digi++;
        x /= 10;
    }
    x = n;
    while (x > 0)
    {
        int last_digit = x % 10;
        sum += pow(last_digit, digi);
        x /= 10;
    }
    if (sum == n)
    {
        return n;
    }else{
        return -1;
    }
}
int main()
{
    cout << "Write a program to Armstrong number in a range.\n";

    int l = 0;
    int u =0;

    cout << "Enter lower bound: ";
    cin >> l;

    cout << "Enter upper bound: ";
    cin >> u;

    for (int i = l; i <= u; i++)
    {
        if(getArmstrong(i)!=-1){
            cout<<getArmstrong(i)<<endl;
        }
    }
    
    return 0;
}
