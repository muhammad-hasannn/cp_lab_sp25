/*Employee Payroll Calculation

In a small company, you've been tasked with developing a C++ program to calculate the payroll for employees.
Each employee has a unique hourly wage and works a different number of hours per week. 
Your program needs to calculate the weekly pay for each employee based on their hourly wage and hours worked.*/


#include<iostream>
using namespace std;
int main(){
    int total_emp = 0;
    cout << "Enter total number of employes: ";
    cin >> total_emp;
    for(int i = 1; i <= total_emp; i++){
        int hrs = 0, sal = 0, final_sal = 0;
        cout << endl;
        cout << "Employee no. "<<i<<endl;
        cout << "Enter hourly salary: ";
        cin >> sal;
        cout << "Enter hours worked: ";
        cin >> hrs;
        final_sal = hrs*sal;
        cout << endl;
        cout << "Salary of employee no. "<<i<<" is "<<final_sal<<endl;
        cout << endl;
    }
}