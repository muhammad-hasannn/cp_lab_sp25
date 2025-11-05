#include<iostream>
using namespace std;

int main(){
    float mass = 0.00, height = 0.00, bmi = 0.00;

    cout << "Enter your mass (lb): ";
    cin >> mass;
    cout << "Enter your height (in): ";
    cin >> height;

    bmi = (mass/(height*height))*float(703);

    cout << "\nYour BMI is: " << bmi << endl;

    if(bmi < 18.5) cout << "Underweight." << endl;
    else if(bmi >= 18.5 && bmi <= 24.9) cout << "Normal." << endl;
    else if(bmi >= 25.0 && bmi <= 29.9) cout << "Overweight." << endl;
    else cout << "Obese." << endl;
}