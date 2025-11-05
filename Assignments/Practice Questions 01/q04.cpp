/*4. Conditional Statements (If-Else): Even or Odd Checker
Task: Write a program that asks the user to enter an integer and determines whether the number is even or odd.*/

#include<iostream>
using namespace std;


int main(){
    int num = 0;
    cout << "Enter any number: ";
    cin >> num;
    if(num%2 == 0){
        cout <<num<< " is an Even number."<<endl; 
    }
    else{
        cout <<num<< " is an Odd number."<<endl;
    }
}