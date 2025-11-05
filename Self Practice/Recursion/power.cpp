#include<iostream>
using namespace std;

int power(int base, int exp){
    if(exp == 0) return 1;
    return base*power(base, exp-1);
}

int main(){
    int base = 0, exp = 0;
    cout << "Enter base: ";
    cin >> base;
    cout << "Enter exponent: ";
    cin >> exp;

    cout << base << " to the power " << exp << " is: " << power(base, exp) << endl;
}