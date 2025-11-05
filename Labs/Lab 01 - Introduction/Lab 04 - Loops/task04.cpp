/*GCD HCF FINDER 

As part of a school project, you're developing a mathematical utility program in C++. One of the essential features you aim to implement is finding the greatest common divisor (GCD), also referred to as the highest common factor (HCF), of two given numbers.  
This functionality is designed to aid students in comprehending the concept of common divisors between two numbers using C++ and a while loop.*/

#include<iostream>
using namespace std;
int main(){
    int n1 = 0, n2 = 0, hcf = 0;
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;
    int i = 1;
    while(i <= n1 && i <= n2){
        if(n1%i == 0 && n2%i == 0){
            hcf = i;
        }
        i++;
    }
    cout << "The HCF is: "<<hcf<<endl;
}