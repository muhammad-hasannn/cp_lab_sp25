/*11. Nested Loops: Prime Number Checker
Task: Develop a program that takes an integer from the user and determines whether it is a prime number using a for loop with a nested condition.*/

#include<iostream>
using namespace std;


int main(){
    int num = 0, count = 0;
    cout << "Enter any number: ";
    cin >> num;
    for(int i = 1; i <= num; i++){
        if(num%i == 0){
            count++;
        }
    }
    if(count == 2){
        cout <<num<< " is a prime number."<<endl;
    }
    else{
        cout <<num<< " is not a prime number."<<endl;
    }
}