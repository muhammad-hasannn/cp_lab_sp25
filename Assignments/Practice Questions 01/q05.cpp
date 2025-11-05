/*5. Decision Control using Switch Case: Basic Calculator
Task: Develop a program that takes two numbers and an operator (+, -, *, /) as input and performs the corresponding operation using a switch statement.*/

#include<iostream>
using namespace std;


int main(){
    float n1 = 0.00, n2 = 0.00;
    char op;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    cout << "Enter operator(+, -, *, /): ";
    cin >> op;

    switch(op){
        case '+':
        cout << "Addition is: "<<(n1+n2)<<endl;
        break;
        case '-':
        cout << "Subtraction is: "<<(n1-n2)<<endl;
        break;
        case '*':
        cout << "Multiplication is: "<<(n1*n2)<<endl;
        break;
        case '/':
        if(n2 == 0){
            cout << "Error: Division by zero is not allowed."<<endl;
        }
        else{
            cout <<n1<<"/"<<n2<<" = "<<n1/n2<<endl;
        }
        break;
        default:
        cout << "Invalid operator!"<<endl;
    }
}