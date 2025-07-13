/*Make a structure BookRec, which stores the following details of a book: title of the book, Author’s name, its publisher and price in it. Write a program to take input of 2 books and display it on the console.*/

#include<iostream>
#include<string>
using namespace std;

struct bookRec{
    string title, author, pub;
    float price = 0.00;
};

int main(){
    bookRec bd;

    for(int i = 0; i < 2; i++){
        cout << "\nEnter title: ";
        getline(cin, bd.title);
        cout << "Enter the name author: ";
        getline(cin, bd.author);
        cout << "Enter the name of publisher: ";
        getline(cin, bd.pub);
        cout << "Enter price: ";
        cin >> bd.price;
        cin.ignore();
    }

    cout << "\nDetails: " << endl;
    for(int i = 0; i < 2; i++){
        cout << "\nBook no. " << (i+1) << endl;
        cout << "\tTitle: " << bd.title <<endl;
        cout << "\tAuthor: " << bd.author << endl;
        cout << "\tPublisher: " << bd.pub << endl;
        cout << "\tPrice: " << bd.price << endl;
    }
}