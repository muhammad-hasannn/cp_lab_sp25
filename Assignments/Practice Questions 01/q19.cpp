/*19. Simple Billing System
Task: Develop a C++ program that simulates a basic billing system. The menu should include:
1.	Add an item with its price.
2.	Display the total bill.
3.	Apply a discount if the total bill exceeds a certain amount.
4.	Exit.
Use functions, loops, and conditional statements effectively.*/

#include<iostream>
using namespace std;

float totalPrice = 0.00;

void addItem(){
    int item = 0;
    float price = 0.00;
    cout << "Enter quantity of items: ";
    cin >> item;
    cout << "Enter price of this item: ";
    cin >> price;
    totalPrice +=(item*price);
}

void calculateBill(){
    if(totalPrice >= 500){
        cout << "You are getting a discount of 10%"<< endl;
        totalPrice = (totalPrice - (totalPrice*0.1));
        cout << "Your new bill is: "<< totalPrice << endl;
    }
    else{
        cout << "Your total bill is: "<< totalPrice << endl;
    }
}

int main(){
    cout << "***Welcome To Super Market***"<< endl;
    cout << endl;
    int choice = 0;
    do{
        cout << "---MENU---"<< endl;
        cout << "To add an item with its price, Press '1'"<< endl;
        cout << "To calculate bill, Press '2'"<< endl;
        cout << "To exit, Press '0'"<< endl;
        cout << "Enter choice: ";
        cin >> choice;
        if(choice == 1){
            addItem();
        }
        else if(choice == 2){
            calculateBill();
        }
        else if(choice == 0){
            cout << "terminating program..."<< endl;
        }
        else{
            cout << "Invalid choice."<< endl;
        }

    }while(choice != 0);
}