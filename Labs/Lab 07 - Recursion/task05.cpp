/*Finding the Maximum

Imagine you are developing a program to assist engineers in analyzing sensor data from three different sources. The program needs to identify the highest recorded values from each sensor to determine potential anomalies in the data. For this purpose, you decide to create a function that finds the maximum of three floating-point numbers, as well as find the maximum of two integer point numbers.
*/

#include<iostream>
using namespace std;

float findMax(float a, float b, float c){
    if(a >= b && a >= c) return a;
    else if(b >= a && b >= c) return b;
    else return c;
}

int findMax(int a, int b){
    if(a >= b) return a;
    else return b;
}

int main(){
    int choice = 0;
    float fVal[3];
    int intVal[2];

    do{
        cout << endl;
        cout << "1. Compare 3 float values." << endl;
        cout << "2. Compare 2 integer values." << endl;
        cout << "3. Exit."  << endl;
        cout << "Enter choice: ";
        cin >> choice;
    
        if(choice == 1){
            cout << endl;
            cout << "Enter values: ";
            cin >> fVal[0] >> fVal[1] >> fVal[2];
            cout << "\nLargest among them is: " << findMax(fVal[0], fVal[1], fVal[2]) << endl;
        }
        else if(choice == 2){
            cout << endl;
            cout << "Enter value: ";
            cin >> intVal[0] >> intVal[1];
            cout << "\nLargest among them is: " << findMax(intVal[0], intVal[1]) << endl;
        }
        else if(choice == 3) cout << "\nClosong program..." << endl;
        else cout << "\nInvalid choice!" << endl;

    }while(choice != 3);
}