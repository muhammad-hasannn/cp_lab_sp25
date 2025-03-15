/*Write a program that takes input as radius then calculate area of circle. (Hint: A= πr²).*/

#include<iostream>
using namespace std;
int main(){
    float r = 0.00, a = 0.00, pi = 3.14;
    cout << "Enter radius of a circle: ";
    cin >> r;
    a = pi*(r*r);
    cout << "Area of this circle with radius \'"<<r<<"\' is: "<<a<<endl;
}