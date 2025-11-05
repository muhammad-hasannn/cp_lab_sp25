/*2. Input & Output: User Information Form
Task: Write a program that asks the user to enter their name, age, and favorite programming language, then prints this information in a formatted way.*/

#include<iostream>
#include<string>
using namespace std;


int main(){
    string name, proglang, gender;
    int age = 0;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your gender (male/female/other): ";
    getline(cin, gender);
    cout << "Enter your age: ";
    cin >> age;
    cout << "Enter your favourite prigramming language: ";
    cin.ignore();
    getline(cin, proglang);

    if(gender == "male"){
        gender = "He";
    }
    else if(gender == "female"){
        gender = "She";
    }
    else{
        gender = "He/She";
    }
    cout << "***************"<<endl;
    cout << "There is a person named \'"<<name<<"\'. "<<gender<<" is "<<age<<" years old. "<<gender<<" loves "<<proglang<<"."<<endl;
    


}