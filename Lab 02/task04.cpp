/*Write a program that reads a temperature in degrees Celsius and prints out the corresponding temperature in degrees Fahrenheit (F = (C * 9 / 5) + 32).*/

#include<iostream>
using namespace std;
int main(){
    float temp_cel = 0.00, temp_fer = 0.00;
    cout << "Enter temperature in Celcius: ";
    cin >> temp_cel;
    temp_fer = ((temp_cel*9/5) + 32);
    cout << "Temperature in Fahrenheit is: "<<temp_fer<<endl;
}