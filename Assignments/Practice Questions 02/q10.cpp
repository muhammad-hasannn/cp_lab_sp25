#include<iostream>
using namespace std;

float calPower(float base, float exp){
    if(exp == 0) return 1;
    return base*calPower(base, exp - 1);
}

int main(){
    float base = 0.00, exp = 0.00;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;

    cout << "\n" << base << " to the power " << exp << " is: " << calPower(base, exp) << endl;
}