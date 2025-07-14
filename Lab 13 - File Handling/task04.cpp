/*Grades Updating App
Imagine you're a teacher managing student grades for your class. You need a program to update the
grades of your students stored in a text file. The program will prompt you to enter a number representin
the amount to increase the grades by. It will then read the student data from the file, increment each student's
grade by the specified amount, and display the updated grades.*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct student{
    string name;
    int marks = 0;
};

void addData(){
    student s;
    cout << endl;
    cout << "Enter student's name: ";
    getline(cin, s.name);
    cout << "Enter marks: ";
    cin >> s.marks;
    cin.ignore();

    ofstream fileOut("studentData.txt", ios::app);
    if(!fileOut.is_open()) cout << "Error in opening file to send student data." << endl;
    else{
        fileOut << s.name << "|" << s.marks << endl;
        fileOut.close();
        cout << "Student recxorded siuccessfully!" << endl;
    }
}

void updateData(){
    student oldData;
    int increment = 0;
    string row;

    cout << endl;
    cout << "Enter marks which you want to add: ";
    cin >> increment;

    ifstream stuIn("studentData.txt", ios::in);
    ofstream tempOut("temp.txt", ios::app);

    if(!stuIn.is_open()) cout << "Error in opening file to read student data." << endl;
    else{
        while(!stuIn.eof()){
            getline(stuIn, row);
            if(row.empty()) continue;

            int pos1 = row.find('|');

            oldData.name = row.substr(0, pos1);
            oldData.marks = stoi(row.substr(pos1 + 1));

            tempOut << oldData.name << "|" << (oldData.marks + increment) << endl;
        }

        tempOut.close();
        stuIn.close();

        remove("studentData.txt");
        rename("temp.txt", "studentData.txt");
    }
}

int main(){
    int choice = 0;
    cout << "***Welcome to Grades Updating App***" << endl;
    do{
        cout << "\n\t---MENU---" << endl;
        cout << "1. Add data." << endl;
        cout << "2. Update data." << endl;
        cout << "3. Exit." << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        switch(choice){
            case 1:
            addData();
            break;
            case 2:
            updateData();
            break;
            case 3:
            cout << "\nClosing program..." << endl;
            break;
            default:
            cout << "\nInvalid choice!" << endl;
            break;
        }
    }while(choice != 3);

}