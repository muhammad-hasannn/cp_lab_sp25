#include<iostream>
#include<string>
using namespace std;

float gradePoint(float marks){
    float gp = 0.00;
    if(marks >= 85 && marks <= 100){
        gp = 4.00;
    }
    else if(marks >= 80 && marks <= 84){
        gp = 3.7;
    }
    else if(marks >= 75 && marks <= 79){
        gp = 3.3;
    }
    else if(marks >= 70 && marks <= 74){
        gp = 3.0;
    }
    else if(marks >= 65 && marks <= 69){
        gp = 2.7;
    }
    else if(marks >= 60 && marks <= 64){
        gp = 2.3;
    }
    else if(marks >= 55 && marks <= 59){
        gp = 2.0;
    }
    else if(marks >= 50 && marks <= 54){
        gp = 1.7;
    }
    else{
        gp = 0.00;
    }
    return gp;
}

int main(){
    string sub1, sub2, sub3, sub4, sub5;
    float mark1 = 0.00, mark2 = 0.00, mark3 = 0.00, mark4 = 0.00, mark5 = 0.00;
    float cr1 = 0.00, cr2 = 0.00, cr3 = 0.00, cr4 = 0.00, cr5 = 0.00, totalCr = 0.00;
    float gp1 = 0.00, gp2 = 0.00, gp3 = 0.00, gp4 = 0.00, gp5 = 0.00, gpa = 0.00;
    int choice = 0;
    cout << endl;
    cout << "-------------------------------"<<endl;
    cout << "***Welcome To GPA Calculator***"<< endl;
    cout << "-------------------------------"<<endl;
    cout << endl;
    do{
        cout << "---MENU---"<<endl;
        cout << "To calculate GPA, Press 1."<<endl;
        cout << "To exit, press 2."<<endl;
        cout << "Enter choice: ";
        cin >> choice;
        cout << endl;
        if(choice == 1){
            cout << "Enter the name of your 1st course: ";
            cin.ignore();
            getline(cin, sub1);
            do{
                cout << "Enter your marks in \'"<<sub1<<"\': ";
                cin >> mark1;
                if(mark1 <0 || mark1 > 100){
                    cout << "Invalid marks!"<<endl;
                }
            }while(mark1 < 0 || mark1 > 100);
            cout << "Enter credit hours of \'"<<sub1<<"\': ";
            cin >> cr1;
            cout << endl;
            cout << "Enter the name of your 2nd course: ";
            cin.ignore();
            getline(cin, sub2);
            do{
                cout << "Enter your marks in \'"<<sub2<<"\': ";
                cin >> mark2;
                if(mark2 <0 || mark2 > 100){
                    cout << "Invalid marks!"<<endl;
                }
            }while(mark2 < 0 || mark2 > 100);
            cout << "Enter credit hours of \'"<<sub2<<"\': ";
            cin >> cr2;
            cout << endl;
            cout << "Enter the name of your 3rd course: ";
            cin.ignore();
            getline(cin, sub3);
            do{
                cout << "Enter your marks in \'"<<sub3<<"\': ";
                cin >> mark3;
                if(mark3 < 0 || mark3 > 100){
                    cout << "Invalid marks!"<<endl;
                }
            }while(mark3 < 0 || mark3 > 100);
            cout << "Enter credit hours of \'"<<sub3<<"\': ";
            cin >> cr3;
            cout << endl;
            cout << "Enter the name of your 4th course: ";
            cin.ignore();
            getline(cin, sub4);
            do{
                cout << "Enter your marks in \'"<<sub4<<"\': ";
                cin >> mark4;
                if(mark4 < 0 || mark4 > 100){
                    cout << "Invalid marks!"<<endl;
                }
            }while(mark4 < 0 || mark4 > 100);
            cout << "Enter credit hours of \'"<<sub4<<"\': ";
            cin >> cr4;
            cout << endl;
            cout << "Enter the name of your 5th course: ";
            cin.ignore();
            getline(cin, sub5);
            do{
                cout << "Enter your marks in \'"<<sub5<<"\': ";
                cin >> mark5;
                if(mark5 < 0 || mark5 > 100){
                    cout << "Invalid marks!"<<endl;
                }
            }while(mark5 < 0 || mark5 > 100);
            cout << "Enter credit hours of \'"<<sub5<<"\': ";
            cin >> cr5;
            cout << endl;
           
            //calculating grade pooint in each course
            gp1 = gradePoint(mark1);
            gp2 = gradePoint(mark2);
            gp3 = gradePoint(mark3);
            gp4 = gradePoint(mark4);
            gp5 = gradePoint(mark5);
            
            //displaying them
            cout << "-------------------------------"<<endl;
            cout << "Your grade point in \'"<<sub1<<"\' is: "<<gp1<<endl;
            cout << "Your grade point in \'"<<sub2<<"\' is: "<<gp2<<endl;
            cout << "Your grade point in \'"<<sub3<<"\' is: "<<gp3<<endl;
            cout << "Your grade point in \'"<<sub4<<"\' is: "<<gp4<<endl;
            cout << "Your grade point in \'"<<sub5<<"\' is: "<<gp5<<endl;
            cout << endl;
    
            //calculation for final gpa
            totalCr = cr1 + cr2 + cr3 + cr4 + cr5;
            gpa = ((gp1*cr1) + (gp2*cr2) + (gp3*cr3) + (gp4*cr4) + (gp5*cr5))/totalCr;
    
            cout << "-------------------------------"<<endl;
            cout << "Your GPA is: "<<gpa<<endl;
            cout << "-------------------------------"<<endl;
            cout << endl;
        }
        else if(choice == 2){
            cout << "Ending program..."<<endl;
        }
        else{
            cout << "Invalid choice!"<<endl;
        }

    }while(choice != 2);

}
