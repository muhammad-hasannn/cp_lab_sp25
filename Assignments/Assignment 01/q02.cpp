/*Scenario 2:
A salary management system is developed for a small company to calculate the monthly Net
Salary of its employees. The system considers the following salary structure:
 Basic Salary (user input)
 House Rent Allowance = 30% of Basic Salary
 Medical Allowance = 10% of Basic Salary
 If the employee has been working for more than 10 years, they receive a 500 AED
loyalty bonus.
 If the employee is married, they receive an additional 200 AED Family Allowance.
The company needs to calculate and display the Net Salary of 5 employees. The system should
also verify whether each employee is eligible for the loyalty bonus and family allowance.*/


#include<iostream>
using namespace std;
int main(){
    int basicsal = 0, i = 1; // basicsal -> basic salary & i -> iterator for 5 employees
    int exp_bonus = 500, married_bonus = 200; 
    bool isExp, isMarried; //exp -> experience
    float rentall = 0.00, medall = 0.00, finalsal = 0.00; // rentall -> rent allowence & medall -> medical allowence
    while(i<=5){ // giving it maximum condition of 5, bcuz we have to calculate only for 5 employees

        cout << "Enter your basic salary: ";
        cin >> basicsal;
        cout << "Is your experience is more than 10 years? (true/false) ";
        cin >> boolalpha >> isExp;
        cout << "Are you married? (true/false) ";
        cin >> boolalpha >> isMarried;
        rentall = basicsal*0.3;
        medall = basicsal*0.1;
        finalsal = (basicsal + rentall + medall); // doing this here bcuz every will get minimum salary with rent allowance and medical allowance, even if he has experience or not also irrespective of his marital status

        if(isExp){ // if employee is experienced there are high chances that he is married, that is why we are using nested loop here.
            if(isMarried){
                cout << "your net salary is: "<<finalsal+exp_bonus+married_bonus<<endl;
            }
            else{
                cout << "your net salary is: "<<finalsal+exp_bonus<<endl;
            }
        }
        else if(isMarried){
            cout << "your net salary is: "<<finalsal+married_bonus<<endl;
        }
        else{
            cout << "your net salary is: "<<finalsal<<endl;
        }
        i++; // increasing it after calculating net salary for each employee    
    }
}