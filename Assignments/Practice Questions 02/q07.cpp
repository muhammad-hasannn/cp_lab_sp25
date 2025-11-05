#include<iostream>
using namespace std;

int computeOddSum(int input){
    int sum = 0;
    for(int i = 0; i < input; i++){
        if(i%2 != 0) sum += i;
    }
    return sum;
}

int computeEvenSum(int input){
    int sum = 0;
    for(int i = 0; i < input; i++) if(i%2 == 0) sum += i;
    return sum;
}

int main(){
    int num = 0;

    while(true){
        cout << "\nEnter a number: ";
        cin >> num;
        if(num < 0){
            cout << "\nNegative number entered! Exiting..." << endl;
            break;
        }
        cout << endl;
        cout << "Sum of all even numbers: " << computeEvenSum(num) << endl;
        cout << "Sum of all odd numbers: " << computeOddSum(num) << endl;
    }
}