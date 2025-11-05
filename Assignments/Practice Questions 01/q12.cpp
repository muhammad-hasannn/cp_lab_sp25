/*12. Functions (Basic): Simple Addition Function
Task: Write a function named addNumbers that takes two integers as arguments and returns their sum. Call this function from main() and display the result.*/

#include<iostream>
using namespace std;

float addNumbers(float a, float b){
    return (a+b);
}

int main(){
    float num1 = 0.00, num2 = 0.00, res = 0.00;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    res = addNumbers(num1, num2);
    cout << "Addition is: "<<res;
}