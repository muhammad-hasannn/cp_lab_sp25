/*Write a C++ program that compute Net Salary of Employee. Program contains two user defined functions empSalary()
and display().
    Create a structure of Employee that contains following data members:
        o	EmployeeNumber, Name, BasicSalary, HouseAllowance, MedicalAllowance,Tax, GrossPay and NetSalary
    Employeenumber, name and basicsalary must be taken input from the user.
    empSalary() compute salary with given criteria:
        o	HouseAllowence = 12% of BasicSalary
        o	Medical Allowence = 8% of Basic Salary
        o	Tax = 5% of Basic Salary
        o	GrossSalary = Basic+HouseAllowence+MedicalAllowence
        o	NetSalary = GrossSalary – Tax
    display() for displaying details of Empolyee.*/

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct employee{
    string name;
    int empNum = 0;
    float basicSal = 0.00, houseAll = 0.00, medAll = 0.00, tax = 0.00, grossSal = 0.00, netSal = 0.00;
};

void calculateSal(employee &eDetails){
    eDetails.houseAll += (eDetails.basicSal*(12/100.0));
    eDetails.medAll += (eDetails.basicSal*(8/100.0));
    eDetails.tax += (eDetails.basicSal*(5/100.00));
    eDetails.grossSal = (eDetails.basicSal + eDetails.houseAll + eDetails.medAll + 0.0);
    eDetails.netSal = (eDetails.grossSal - eDetails.tax) + 0.00;
}

void display(employee ed){
    cout << "\nPay Slip:" <<endl <<endl;
    cout << "Emp No.  Name           Basic Salary   House Allowence(12%)  Medical Allowence(8%) Tax(5%)  Gross Salary Net Salary\n";
    for(int i = 0; i < 115; i++) cout << "-";
    cout << endl;
    cout << left;

    cout<<setw(9)<<ed.empNum<<setw(15)<<ed.name<<setw(15)<<ed.basicSal<<setw(22)<<ed.houseAll<<setw(22)<<ed.medAll<<setw(9)<<ed.tax<<setw(13)<<ed.grossSal<<setw(10)<<ed.netSal<<endl;
}

int main(){
    employee eDetail;

    cout << "Enter employee number: ";
    cin >> eDetail.empNum;
    cin.ignore();
    cout << "Enter employee name: ";
    getline(cin, eDetail.name);
    cout << "Enter basic salary: ";
    cin >> eDetail.basicSal;

    calculateSal(eDetail);
    display(eDetail);
}    