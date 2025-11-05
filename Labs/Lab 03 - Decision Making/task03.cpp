/*Task 3: Age Analysis

Assume that three friends are planning to do zip line adventure. Where age will be evaluated first to send the younger one first. Write a C++ program where compare age of 3 friends. Find the youngest one from all three*/

#include<iostream>
using namespace std;
int main(){
    int age_fr1 = 0, age_fr2 = 0, age_fr3 = 0;
    cout << "Enter age of 1st friend: ";
    cin >> age_fr1;
    cout << "Enter age of 2nd friend: ";
    cin >> age_fr2;
    cout << "Enter age of 3rd friend: ";
    cin >> age_fr3;
    if(age_fr1<age_fr2 && age_fr1<age_fr3){
        cout << "1st friend is youngest, with age of "<<age_fr1<<" years."<<endl;
    }
    else if(age_fr2<age_fr1 && age_fr2<age_fr3){
        cout << "2nd friend is youngest, with age of "<<age_fr2<<" years."<<endl;
    }
    else{
        cout << "3rd friend is youngest, with age of "<<age_fr3<<" years."<<endl;
    }
}