/*13. Functions: Factorial Calculator
Task: Create a function factorial(int n) that calculates the factorial of a number using a loop. Call this function from main() and display the result.*/

#include<iostream>
using namespace std;

int factorial(int a){
    int fact = 1;
    for(int i = 1; i <= a; i++){
        fact *= i;
    }
    return fact;
}

int main(){
    int num = 0;
    cout << "Enter number of which you want to see factorial: ";
    cin >> num;
    int res = factorial(num);
    cout << "Factorial of "<<num<<" is: "<<res<<endl;
    
}