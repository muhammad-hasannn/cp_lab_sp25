/*Prime Checker
A group of students is tasked with creating a C++ project titled "Prime Number Addition." The goal is to input 10 integers provided by the user, and the program will then identify prime numbers among these inputs and calculate their sum. Using a for loop, the program will prompt the user to input each integer individually. After gathering the inputs, it will calculate the sum of the prime numbers and display the result*/

#include<iostream>
using namespace std;
int main(){
    int n = 0;
    cout << "Enter number: ";
    cin >> n;
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n%i == 0){
            count++;
        }
    }
    if(count == 2){
        cout << "It is a prime number."<<endl;
    }
    else{
        cout << "It is not a prime number."<<endl;
    }
}