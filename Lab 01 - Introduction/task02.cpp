/*Draw a flowchart & Write a C++ program to store statement record such as (Name, Age, Grade and CGPA).*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int age = 0;
    string grade;
    float cgpa = 0.00;
    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your grade: ";
    cin.ignore();
    getline(cin,grade);
    cout << "Enter your CGPA: ";
    cin >> cgpa;
}