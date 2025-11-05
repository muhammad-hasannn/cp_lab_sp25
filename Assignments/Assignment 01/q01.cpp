/*Scenario 1:
A travel agency system is designed to manage flight reservation details for customers. The
system needs to store passenger information including:
 Passenger Name
 Passport Number
 Ticket Price
 Is the Passenger a Senior Citizen
 Is the Passenger Traveling with Family
The travel agency offers discounts to customers based on certain conditions to promote familyfriendly and senior citizen travel.
 Senior Citizens receive a 20% Discount as part of their loyalty program.
 Passengers traveling with family receive a 10% Discount to encourage family trips.
 If both conditions are true, a 30% Discount is applied as a special combined package.
The system must calculate the final ticket price after applying the appropriate discount based
on the passenger's eligibility.*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int ppn = 0, tp = 0; // ppn -> passport number & tp -> ticket price
    bool isSenior, isFamily;
    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Enter your Passport number: ";
    cin >> ppn;
    cout << "Enter your ticket price: ";
    cin >> tp;
    cout << "Are you senior? (true/false) ";
    cin >> boolalpha >> isSenior; // using 'boolalpha' so that compiler can understand true or false as 0 or 1
    cout << "Are you with your family? (true/false) ";
    cin >> boolalpha >> isFamily;
    if(isFamily && isSenior){ // using if-else statement to check wheather he's with faimily or not. 
        float dp = 0.00; 
        dp = tp*0.7; 
        cout << "Cogragulations! You are getting a discount of 30%, you dicounted price is: "<<dp<<endl;

    }
    else if(isSenior){
        float dp = 0.00; // dp -> discount price
        dp = tp*0.9; // id discount is 10%, it means he's paying 90%
        cout << "Cogragulations! You are getting a discount of 10%, you dicounted price is: "<<dp<<endl;
    }
    else if(isFamily){
        float dp = 0.00; 
        dp = tp*0.8; 
        cout << "Cogragulations! You are getting a discount of 20%, you dicounted price is: "<<dp<<endl;
    }
    else{
        cout << "Your payable amount is: "<<tp<<endl;
    }    
return 0;
}