#include<iostream>
using namespace std;

double calBMI(double weight, double height){
    return (weight/(height*height))*double(703);
}

string findStatus(double bmi){
    if(bmi < 18.5) return "Underweight";
    else if(bmi >= 18.5 && bmi <= 24.9) return "Normal";
    else if(bmi >= 25.0 && bmi <= 29.9) return "Overweight";
    else return "Obese";
}

int main(){
    double weight = 0.00, height = 0.00, bmi = 0.00;
    cout << "Enter weight(lb): ";
    cin >> weight;
    cout << "Enter height(in): ";
    cin >> height;

    bmi = calBMI(weight, height);
    cout << "\nYour weight status is: " << findStatus(bmi) << endl;
}