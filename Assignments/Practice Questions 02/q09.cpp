#include<iostream>
using namespace std;

int fib(int n){
    if(n == 0 || n == 1) return n;
    return (fib(n-1) + fib(n-2));
}

int main(){
    int num = 0;
    cout << "Enter the no. term in Fibonacci sequence: ";
    cin >> num;

    cout << "\nFibonacci value at "<<num<<" is: " << fib(num - 1) << endl;
    
}