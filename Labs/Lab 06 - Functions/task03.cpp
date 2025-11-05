/* Number Analysis

Write a C++ program that includes functions to find the least significant digit and most significant digit of a three-digit number. Additionally, implement functions to calculate the sum of digits and determine whether the number is a palindrome*/

#include<iostream>
#include<string>
using namespace std;

void plaindrome(char a, char c){
    if(a == c){
        cout << "It is a Palindromic number."<<endl;
    }
    else{
        cout << "It is not a Palindromic number."<<endl;
    }
}
int main(){
    int num = 0; //user will input an integer
    string numStr; //we will convert it into string
    char first, last;//to store first and last digit

    cout << "Enter a three digit number: ";
    cin >> num;

    numStr = to_string(num);//converting into string
    first = numStr[0];//extracting
    last = numStr[2];
    cout << "First digit is: "<<first<<endl;
    cout << "Last digit is: "<<last<<endl;
    
    plaindrome(first, last);
}