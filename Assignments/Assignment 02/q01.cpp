/*A local bank is looking for a simplified banking system that allows customers to manage their accounts using a text-based console application. When a new customer visits the bank, they must be able to open an account by providing their name, selecting an account number, and making an initial deposit. Once an account is created, the customer should be able to deposit money, withdraw funds, and check their current balance. However, withdrawal requests must be validated to ensure the account does not go into a negative balance. The system should remain operational until the customer chooses to exit.*/

#include<iostream>
#include<string>
using namespace std;

// function to deposit money
void deposit(float &totalBalance){
    float amount = 0.00;
    cout << "Enter amount you want to deposit: ";
    cin >> amount;
    totalBalance += amount;
    cout << endl;
    cout << "Your new balance is: "<<totalBalance<<endl;
    cout << endl;
}

// function withdraw money
void withdraw(float &totalBalance){
    float amount = 0.00;
    cout << "Enter amount you want to withdraw: ";
    cin >> amount;
    if(amount <= totalBalance){
        totalBalance -= amount;
        cout << endl;
        cout << "Your new balance is: "<<totalBalance<<endl;
        cout << endl;
    }
    else{
        cout << endl;
        cout << "Insufficient balance."<<endl;
        cout << endl;
    }
}

int main(){
    string name;
    int accNo = 0; //we will take random acc no. from user
    float totalBalance = 0.00;
    cout << "-----------------------------"<<endl;
    cout << "***WELCOME TO HASAN's BANK***"<<endl;
    cout << "*****Create Your Account*****"<<endl;
    cout << "-----------------------------"<<endl;
    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Create account no. (4-digits): ";
    cin >> accNo;
    cout << "Congargulations! your account is created with account no. \'"<<accNo<<"\'."<<endl;
    
    int choice = 0; // for condition of do while
    do{
        cout << "-----------------------------"<<endl;
        cout << "*************MENU************"<<endl;
        cout << "-----------------------------"<<endl;
        cout << "To add money to your account, Press '1': "<<endl;
        cout << "To withdraw money from your account, Press '2': "<<endl;
        cout << "To check your balance, Press '3': "<<endl;
        cout << "To exit, Press '4': "<<endl;
        cout << "Enter choice: ";
        cin >> choice;
        if(choice == 1){
            deposit(totalBalance); //calling deposit function
        }
        else if(choice == 2){
            withdraw(totalBalance); //calling withdraw function
        }
        else if(choice == 3){ //if he choose to check balance
            cout <<endl;
            cout << "Your balance is: "<<totalBalance<<endl;
            cout << endl;
        }
        else if(choice == 4){
            cout <<endl;
            cout << "Ending program with balance: "<<totalBalance<<endl;
        }
        else{
            cout << "Invalid choice!"<<endl;
        }
    }while (choice!=4);
}