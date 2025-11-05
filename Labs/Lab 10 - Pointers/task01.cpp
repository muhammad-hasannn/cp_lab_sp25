/* Student Information Swap Task
You're managing student information for a school. Your task is to implement a function that swaps
the information of two students. This task will help you understand how pointers can be applied
to real-world problems.*/

#include<iostream>
using namespace std;


int main(){
    string name[2], grade[2];
    int age[2];

    string *pName = name, *pGrade = grade;
    int *pAge = age;

    for(int i = 0; i < 2; i++){
        cout << "Student no. " << i+1 << endl;
        cout << "\tEnter name: ";
        getline(cin, name[i]);
        cout << "\tEnter age: ";
        cin >> age[i];
        cout << "\tEnter grade: ";
        cin >> grade[i];
        cin.ignore();
    }

    cout << "Before swaping:" << endl;
    for(int i = 0; i < 2; i++){
        cout << "\tStudent no. "<<i+1<<" Name: "<<name[i]<<" Age: "<<age[i]<<" Garde: "<<grade[i] << endl;
    }

    //swaping
    string tempName = *pName;
    *pName = *(pName+1);
    *(pName+1) = tempName;

    int tempAge = *pAge;
    *pAge = *(pAge+1);
    *(pAge+1) = tempAge;

    string tempGrade = *pGrade;
    *pGrade = *(pGrade+1);
    *(pGrade+1) = tempGrade;

    cout << "After swaping:" << endl;
    for(int i = 0; i < 2; i++){
        cout << "\tStudent no. "<<i+1<<" Name: "<<name[i]<<" Age: "<<age[i]<<" Garde: "<<grade[i] << endl;
    }
}