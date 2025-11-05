/*18. Menu-Driven Program: Bank Transaction System
Task: Create a program that allows the user to:
1.	Deposit money.
2.	Withdraw money (with a balance check).
3.	Check balance.
4.	Exit.
Use loops and functions for implementation.*/

#include<iostream>
using namespace std;

float totalBal = 0.00;

void deposit(){
    float amount = 0.00;
    cout << "Enter amount you want to deposit: ";
    cin >> amount;
    totalBal +=amount;
}

void withdraw(){
    float amount = 0.00;
    cout << "Enter amount you want to withdraw: ";
    cin >> amount;
    if(amount > totalBal){
        cout << "Insufficient balance."<<endl;
    }
    else{
        totalBal -= amount;
    }
}
void checkBal(){
    cout << "Your total balance is: "<<totalBal<<endl;
}


int main(){
    cout << "***Bank Transaction System***"<<endl;
    cout << endl;
    int choice = 0;
    do{
        cout << "---MENU---"<< endl;
        cout << "To deposit money, Press '1'"<< endl;
        cout << "To withdraw money, Press '2'"<< endl;
        cout << "To check balance, Press '3'"<< endl;
        cout << "To exit, Press '0'"<< endl;
        cout << "Enter choice: ";
        cin >> choice;
        cout << endl;
        if(choice == 1){
            deposit();
        }
        else if(choice == 2){
            withdraw();
        }
        else if(choice == 3){
            checkBal();
        }
        else if(choice == 0){
            cout << "Terminating program..."<< endl;
        }
        else{
            cout << "Invalid choice."<< endl;
        }

    }while(choice != 0);
    
}