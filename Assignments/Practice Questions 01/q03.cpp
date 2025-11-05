/*3. Conditional Statements (If-Else): Grade Calculator
Task: Develop a program that asks the user for a percentage score and determines the corresponding grade (A, B, C, D, F) using an if-else statement.*/

#include<iostream>
using namespace std;


int main(){
    float per = 0.00;
    cout << "Enter your percentage: ";
    cin >> per;
    if(per >= 85){
        cout << "Grade A"<<endl;
    }
    else if(per < 85 && per >= 70){
        cout << "Grade B"<<endl;
    }
    else if(per < 70 && per >= 60){
        cout << "Grade C"<<endl;
    }
    else if(per < 60 && per >= 50){
        cout << "Grade D"<<endl;
    }
    else{
        cout << "Grade F"<<endl;
    }
}