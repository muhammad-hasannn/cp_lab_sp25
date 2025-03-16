/*Task 4: Medical Diagnosis System


Write a C++ program that takes the user's input for body temperature and uses if-else statements to determine and display a basic medical diagnosis such as "Hypothermia," "Normal Body Temperature," "Low-Grade Fever," or "High Fever" based on different temperature ranges. Students can run the program with various temperature inputs to observe the different diagnoses.

Temp less than 36.5 	        Hypothermia
Temp in between 36.5 and 37.5	Normal Body Temperature
Temp in between 37.6 and 38.5	Low grade Fever
More than 38.5	                High Fever*/

#include<iostream>
using namespace std;
int main(){
    float temp = 0.00;
    cout << "Enter your body temperature: ";
    cin >> temp;
    if(temp<36.5){
        cout << "You are diagnosed with Hypothemia."<<endl;
    }
    else if(temp>=36.5 && temp<=37.5){
        cout << "You temperature is Normal."<<endl;
    }
    else if(temp>=37.6 && temp<=38.5){
        cout << "You are diagnosed with Low Grade Fever."<<endl;
    }
    else{
        cout << "You are diagnosed with High Fever."<<endl;
    }
}