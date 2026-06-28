#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Write a program to Create library management system.\n";

    string bookName, author;
    int bookID;

    cout << "Enter Book ID:\n";
    cin >> bookID;

    cin.ignore();

    cout << "Enter Book Name:\n";
    getline(cin, bookName);

    cout << "Enter Author Name:\n";
    getline(cin, author);

    cout << "\nLibrary Record\n";
    cout << "Book ID : " << bookID << endl;
    cout << "Book Name : " << bookName << endl;
    cout << "Author : " << author << endl;

    return 0;
}