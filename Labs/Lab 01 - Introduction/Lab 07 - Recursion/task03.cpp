/*Recursive Fibonacci number Calculation

Imagine you are developing a program to calculate Fibonacci numbers for a mathematics class. Your task is to create a C++ program that allows students to input a positive number and calculates the corresponding Fibonacci number using a recursive function. Here's how the program works:
The program prompts the user to enter a positive number.
   •	The user inputs a positive number, and the program stores it in a variable called N.
   •	The program calls a recursive function called fib() to calculate the Fibonacci number for the input  value of N.
The fib() function calculates the Fibonacci number using the following rules:
   •	For n = 0, the Fibonacci number is 0.
   •	For n = 1, the Fibonacci number is 1.
   •	For n > 1, the Fibonacci number is calculated as the sum of the Fibonacci numbers of the previous 
   two terms : fib(n) = fib(n-1) + fib(n-2)*/

#include<iostream>
using namespace std;

int fib(int n){
    if(n == 0 || n == 1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){
   int n = 0;
   cout << "Enter a positive number: ";
   cin >> n;

   cout << "\nFibonacci no. for " << n << " is: " << fib(n) << endl;
}