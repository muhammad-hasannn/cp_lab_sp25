/*Inventory Management

You work for a small retail store that needs a program to manage its inventory. 
The store wants a program that allows them to enter the quantity of each item in stock and calculates the total value of the inventory. Each item has an associated price.
Write a C++ program by implementing loop concept on this task 

Requirements

	Prompt the user to enter the number of different items in stock.
	For each item, prompt the user to enter the price per unit and the quantity in stock.
	Calculate and print the total value of the inventory.*/

#include<iostream>
using namespace std;

int main(){
    int total_items = 0, qt = 0;
    float price = 0.00, total_price = 0.00, final_price = 0.00;
    cout << "Enter the total number of products you have purchased: ";
    cin >> total_items;
    for(int i = 1; i <= total_items; i++){
        cout << "Enter the price of your item no. "<<i<<": ";
        cin >> price;
        cout << "Enter the quantity of your item no. "<<i<<": ";
        cin >> qt;
        cout << "-------------------------------"<<endl;
        total_price = (price*qt);
        final_price = final_price + total_price;
    }
    cout << "Final payable amount is: "<<final_price;
}