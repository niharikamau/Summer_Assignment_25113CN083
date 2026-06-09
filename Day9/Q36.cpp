#include <iostream>
using namespace std;

int main()
{
    cout << "Write a program to print hollow square pattern.\n";

    for (int i = 1; i < 6; i++)
    {
        if(i==1 || i==5){
            for (int j = 1; j <= 5; j++)
            {
                cout<<'*';
            }
        }
        else{
            cout<<'*';
            for (int k = 1; k <= 3; k++)
            {
                cout<<' ';

            }
            cout<<'*';
        }
        cout<<"\n";
    }
    

    return 0;
}
/*
i=1, st =5, sp=0
i=2, st =1, sp=3
i=3, st =1, sp=3
i=4, st= 1,sp=3
i=5, st= 5,sp=0
*/