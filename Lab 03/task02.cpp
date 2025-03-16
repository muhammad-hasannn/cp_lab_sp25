/*Task 2: Shopping Cart

You are developing an online shopping application for a retail store. The store wants to offer discounts to customers based on their total purchase amount. If the total purchase amount exceeds 15000 Rupees, a 10% discount will be applied to the customer's order. 
Write a C++ program that prompts the user to enter the total purchase amount. Based on the entered amount, apply the appropriate discount using if-else statements and display the discounted amount to the customer.*/

#include<iostream>
using namespace std;
int main(){
    int ta = 0; //ta -> total amount
    float fa = 0.00; //fa -> final amount
    cout << "Enter the total amount of your purchased items: ";
    cin >> ta;
    if(ta>15000){
        cout << "Congragulations! you are getting a 10% discount."<<endl;
        fa = ta*0.9; //if getting 10% discount, means he's 90% amount
        cout << "Your discounted amount is: "<<fa<<endl; 
    }
    else{
        fa = ta;
        cout << "Your total amount is: "<<fa<<endl;

    }
}