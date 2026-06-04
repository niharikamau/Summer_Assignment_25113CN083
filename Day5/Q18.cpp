#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int getFac(int i){
    if(i==0){
        return 1;
    }
    int ans = i*getFac(i-1);
    return ans;
}

int main(){
    cout << "Write a program to check strong number.\n";
    int n =0;
    cout << "Enter N: ";
    cin >> n;
    int sum =0;
    int x =n;
    while(x>0){
        sum += getFac(x%10);
        x/=10;
    }
    if(sum==n){
        cout<<"true";
    }else{
        cout<<"false";
    }
return 0;
}