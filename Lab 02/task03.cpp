/*Write a C++ program that prompt input roll number, student name and marks of three subjects:
1.	Computer Programming = CP
2.	Object Oriented Programming= OOP
3.	Data Structures & Algorithms= DSA
Calculate total marks, percentage and division of student.
Marks percentage = marks obtained / total * 100*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int rn = 0; // rn = roll number
    float cp = 0.00, oop = 0.00, dsa = 0.00, per = 0.00;
    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Enter your roll number: ";
    cin >> rn;
    cout << "Enter your marks in Computer Programming CP: ";
    cin >> cp;
    cout << "Enter your marks in Object Oriented Programming OOP: ";
    cin >> oop;
    cout << "Enter your marks in Data Structures and Algorithms DSA: ";
    cin >> dsa;
    per = ((cp+oop+dsa)/(300))*100;
    cout << "Your percentage is: "<<per<<endl;

}
