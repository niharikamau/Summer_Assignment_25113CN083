#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Write a program to check perfect number.\n";
    int n =0;
    cout << "Enter N: ";
    cin >> n;
    int sum =0;
    if(n<=1) cout<<"invalid input";

    for (int i = 1; i < n; i++)
    {
        if(n%i ==0){
            sum+=i;
        }
    }
    if(sum==n){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}