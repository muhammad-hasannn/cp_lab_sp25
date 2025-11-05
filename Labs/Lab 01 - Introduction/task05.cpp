/*Write a program to read the salary of an employee and prints particular designation of the concern person for example Manager Salary = 200k, Supervisor = 150k and Technician = 80k.*/

#include<iostream>
using namespace std;
int main(){
    int sal = 0;
    cout << "Enter the amount of your salary: ";
    cin >> sal;
    if(sal == 200){
        cout << "Your designation is Manager.";
    }
    else if(sal == 150){
        cout << "Your designation is Supervisor.";
    }
    else if(sal == 80){
        cout << "Your designation is Technician.";
    }
    else{
        cout << "Enter valid amount!";
    }
}