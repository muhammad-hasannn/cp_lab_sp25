/*6. Loop Control Instructions (For Loop): Multiplication Table
Task: Write a program that takes an integer from the user and prints its multiplication table using a for loop.*/

#include<iostream>
using namespace std;


int main(){
    int num = 0, lim = 0;
    cout << "Enter number of which you want to see table: ";
    cin >> num;
    cout << "Enter number till which you want to see multiplication: ";
    cin >> lim;

    for(int i = 1; i <= lim; i++){
        cout <<num<<" * "<<i<<" = "<<num*i<<endl;
    }
}