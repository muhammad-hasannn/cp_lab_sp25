/*17. Menu-Driven Program: Student Report System
Task: Develop a program that provides the following options:
1.	Input student marks for three subjects.
2.	Calculate and display the percentage.
3.	Determine the grade based on the percentage.
4.	Exit.
Use functions to implement each menu option.*/

#include<iostream>
using namespace std;

float totalMarks(){
    float sub1 = 0.00, sub2 = 0.00, sub3 = 0.00;
    cout << "Enter marks of your 1st subject: ";
    cin >> sub1;
    cout << "Enter marks of your 2nd subject: ";
    cin >> sub2;
    cout << "Enter marks of your 3rd subject: ";
    cin >> sub3;
    cout << "Total obtained marks are: "<<(sub1 + sub2 + sub3)<<endl;
    return (sub1 + sub2 + sub3);
}

float percentage(){
    float obtMarks = totalMarks();
    cout << "Your percentage is: "<<((obtMarks/300)*100.00)<<endl;
    return ((obtMarks/300)*100.00);
}

void grade(){
    float per = percentage();
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

int main(){
    cout << "***Student Report System***"<<endl;
    cout << endl;
    int choice = 0;
    do{
        cout << "---MENU---"<<endl;
        cout << "To calculate total marks, Press '1'"<<endl;
        cout << "To calculate percentage, Press '2'"<<endl;
        cout << "To see grade, Press '3'"<<endl;
        cout << "To exit, Press '0'"<<endl;
        cout << "Enter choice: ";
        cin >> choice;
        if(choice == 1){
            totalMarks();
        }
        else if(choice == 2){
            percentage();
        }
        else if(choice == 3){
            grade();
        }
        else if(choice == 0){
            cout << "terminating program..."<<endl; 
        }
        else{
            cout << "Invalid choice"<<endl;
        }

    }while(choice != 0);
}