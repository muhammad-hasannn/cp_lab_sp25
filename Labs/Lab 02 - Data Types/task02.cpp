/*Write a C++ program that reads a number in inches and converts it to meters. Note: One inch is 0.0254 meter.*/

#include<iostream>
using namespace std;
int main(){
    float value_inch = 0.00, value_meter = 0.00;
    cout << "Enter number in inches: ";
    cin >> value_inch;
    value_meter = value_inch*0.0254;
    cout << "Value in meters is: "<<value_meter<<endl;
}
