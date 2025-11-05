/*7. Loop Control Instructions (While Loop): Sum of Natural Numbers
Task: Develop a program that takes a positive integer n from the user and calculates the sum of all numbers from 1 to n using a while loop.*/

#include<iostream>
using namespace std;


int main(){
    int num = 0, sum = 0;
    cout << "Enter number till which you want to see sum: ";
    cin >> num;

    int i = 1;
    while(i <= num){
        sum += i;
        i++;
    }
    cout << "Sum is: "<<sum<<endl;
}