/*Personal Finance Tracker 

Develop a C++ program for personal finance tracking. The program should allow users to record financial transactions, categorize expenses, calculate total expenses and income, and view their budget. 
Instructions:
Present a menu with the following options:
1.	Record Transaction: Users can record a transaction by entering the category and amount.
2.	View Expenses: Display the total expenses recorded.
3.	View Income: Display the total income recorded.
4.	View Budget: Display the budget, calculated as the difference between total income and total expenses.
5.	Exit: Terminate the program.
When recording a transaction, prompt the user to input the category and amount. Positive amounts denote income, while negative amounts denote expenses. Categorize each transaction as income or expense based on the amount entered. Display the category and amount of each transaction. Calculate and display the total expenses and income. Calculate and display the budget, which is the difference between total income and total expenses. Continue displaying the menu and prompting for options until the user chooses to exit.*/

#include<iostream>
using namespace std;

//function to add and subtract money
void addTransactions(float &income, float &expense){
    float groceries = 0.00, utility = 0.00, loan = 0.00, temp_income = 0.00;
    int choice = 0;
    cout << "---------Add transaction---------"<<endl;
    cout << "Record Income. Press '1' "<<endl;
    cout << "Record Groceries. Press '2' "<<endl;
    cout << "Record Utility bills. Press '3' "<<endl;
    cout << "Record Loan. Press '4' "<<endl;
    cout << endl;
    cout << "Enter choice: ";
    cin >> choice;
    cout << endl;
    if(choice == 1){
        cout << "Enter your income: ";
        cin >> temp_income;
        cout << "Recorded!"<<endl;
    }
    else if(choice == 2){
        cout << "Enter your groceries expense: ";
        cin >> groceries;
        cout << "Recorded!"<<endl;
    }
    else if(choice == 3){
        cout << "Enter your utility bill expense: ";
        cin >> utility;
        cout << "Recorded!"<<endl;
    }
    else if(choice == 4){
        cout << "Enter your loan amount: ";
        cin >> loan;
        cout << "Recorded!"<<endl;
    }
    else{
        cout << "Invalid choice."<<endl;
    }
    income += temp_income;
    expense += (groceries + utility + loan);
}

void viewExpense(float expense){
    cout << endl;
    cout << "Your total amount of expenses is: "<<expense<<endl;
    cout << endl;
}

void viewBudget(float income, float expense){
    float budget = income - expense;
    cout << endl;
    cout << "Your total income is: "<<income<<endl;
    cout << "Your total expenses are: "<<expense<<endl;
    cout << endl;
    cout << "Your available budget is: "<<budget<<endl;
    cout << endl;
}

int main(){
    float income = 0.00, expense = 0.00;
    int choice = 0;
    cout << "****PERSONAL FINANCE TRACKER****"<<endl;
    do{
        cout << "--------------MENU---------------"<<endl;
        cout << "To record transaction, Press '1' "<<endl;
        cout << "To view expense, Press '2' "<<endl;
        cout << "To view budget, Press '3' "<<endl;
        cout << "To exit, Press '4' "<<endl;
        cout << "Enter choice: ";
        cin >> choice;
        cout << endl;
        if(choice == 1){
            addTransactions(income, expense);
        }
        else if(choice == 2){
            viewExpense(expense);
        }
        else if(choice == 3){
            viewBudget(income, expense);
        }
        else if(choice == 4){
            cout << "terminating program..."<<endl;
        }
        else{
            cout << "Invalid choice"<<endl;
        }
    }while(choice != 4);
}