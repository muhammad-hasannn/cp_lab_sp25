/*ATM System 
                  
Create a simple ATM system that allows users to check their balance, deposit funds, and withdraw funds. Use functions to perform each operation and use if-else ladders to validate user input and ensure that withdrawals do not exceed the available balance. Use loops to allow multiple transactions until the user chooses to exit.*/

#include<iostream>
using namespace std;

void deposit(float &totalBalance){
    float amount = 0.00;
    cout << "Enter amount you want to deposit: ";
    cin >> amount;
    totalBalance += amount;
    cout << endl;
    cout << "Your new balanace is: "<<totalBalance<<endl;
    cout << endl;
}

void withdraw(float &totalBalance){
    float amount = 0.00;
    cout << "Enter amount you want to withdraw: ";
    cin >> amount;
    if(amount>totalBalance){
        cout << endl;
        cout << "Insufficient balance."<<endl;
        cout << endl;
    }
    else{
        totalBalance -= amount;
        cout << endl;
        cout << "Your new balance is: "<<totalBalance<<endl;
        cout << endl;
    }
}

void checkbalance(float &totalBalance){
    cout << endl;
    cout << "Your total balance is: "<<totalBalance<<endl;
    cout << endl;
}

int main(){
    float totalBalance = 0.00;
    int choice = 0;
    cout << "Welcome to Bank"<<endl;
    do{
        cout << "*****Menu*****"<<endl;
        cout << "To deposit amount, press '1' "<<endl;
        cout << "To withdraw amount, press '2' "<<endl;
        cout << "To check balance, press '3' "<<endl;
        cout << "To exit, press '4' "<<endl;
        cout << "Enter choice: ";
        cin >> choice;
        if(choice == 1){
            deposit(totalBalance);
        }
        else if(choice == 2){
            withdraw(totalBalance);
        }
        else if(choice == 3){
            checkbalance(totalBalance);
        }
        else if(choice == 4){
            cout << endl;
            cout << "Ending program with total balance: "<<totalBalance<<endl;
        }
        else{
            cout << "invalid choice."<<endl;
        }
    }while(choice!=4);
}