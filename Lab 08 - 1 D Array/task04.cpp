/*Write a C++ program that keeps asking the user to enter numbers one by one.
   •	For each number, check if it contains the digit 0 (like in 10, 204, 3021, etc.).
   •	If the number doesn’t contain a 0, store it in an array.
   •	But the moment the user enters a number that does contain a 0 — stop taking inputs and exit the loop.
After that:
   •	Display all the numbers that the user entered before the one with 0 in it.*/

#include<iostream>
using namespace std;


int main(){
    int max = 100;
    int validCount = 0;
    int a[max], valid[max];

    for(int i = 0; i < max; i++){
        bool zeroFound = false;
        do{
            cout << "Enter any integer without zero: ";
            cin >> a[i];

            if(a[i] == 0){
                cout << "You entered zero!" << endl;
                zeroFound = true;
                break;
            }
        }while(a[i] == 0); // if user directly enters zero. because we will not able to check single zero with while loop

        int temp = a[i];
        int lastDigit = 0;

        while(temp != 0){
            lastDigit = temp%10; //getting the last digit
            if(lastDigit == 0){
                cout << "\nYou entered integer with zero!" << endl;
                zeroFound = true;
                break;
            }
            else{
                temp /= 10; //removing the lastdigit if it is not equal to zero.
            }
        }

        if(zeroFound){
            break;
        }
        else{
            valid[validCount] = a[i];
            validCount++;
        }
    }

    cout << "\nValid inputs: ";
    for(int i = 0; i < validCount; i++){
        cout << valid[i] << " ";
    }
}