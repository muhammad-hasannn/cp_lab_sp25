/*Draw a flowchart and Write a C++ program to read student’s three grade, calculate the average of the grade, and then display the average grade.*/

#include<iostream>
using namespace std;
int main(){
    int g1 = 0, g2 = 0, g3 = 0; //g means Grade
    float avg = 0.00;
    cout << "Enter your first grade: ";
    cin >> g1;
    cout << "Enter your second grade: ";
    cin >> g2;
    cout << "Enter your third grade: ";
    cin >> g3;
    avg = (g1+g2+g3)/3.00; // calculating average
    cout << "Your average is: "<<avg;
}