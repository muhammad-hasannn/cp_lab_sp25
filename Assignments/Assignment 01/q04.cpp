/*Scenario 1:
A bank loan repayment system helps customers keep track of their monthly loan installments.
The system follows these rules:
 Loan Amount = 20,000 AED
 Monthly Installment = 2000 AED
 If the customer pays 6 consecutive installments on time, they receive a 1000 AED bonus
added to the loan payment.
 If the customer misses any installment, the bonus is not applied.
The system needs to calculate the remaining loan balance after each payment and stop the
process once the entire loan amount is fully paid. The bonus eligibility must be checked after
every 6 payments.
i. Exhibit the use of a while loop to simulate the installment payment process.
ii. Explain how the bonus condition is verified inside the loop.
iii. Demonstrate how the remaining loan balance is updated at each iteration and how the
loop terminates when the loan is fully repaid.*/

#include<iostream>
using namespace std;
int main(){
    int la = 20000, ma = 2000; // la -> loan amount & ma -> monthly installment
    bool ud; // ud -> user decision
    int count = 0; // counter for consecutive payments
    while(la>=0){
        cout << "Your existing loan amount is: "<<la<<endl;
        cout << "Do you want to pay monthly installment of RS 2000? (0/1) ";
        cin  >> ud;
        if(ud){
            la = la-ma;
            count++; // incrementing if he pays the loan
            if(count==6){
                cout << "Congragulations! you got bonus of RS 1000 for paying 6 times consecitively. "<<endl;
                la = la-1000;
                count = 0; // reseting counter when it gets itreates to 6 
            }
        }
        else{
            cout << "You didn't pay the loan"<<endl;
            count = 0; // reseting counter to zero if he didn't his streak of paying loan
        }
    }
    cout << "you have succesfully paid the loan."<<endl;
}