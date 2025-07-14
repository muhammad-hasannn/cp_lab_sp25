/*Backup System
You are tasked with creating a program to back up the library's catalog. The program should copy the contents of the main catalog file to a backup file, ensuring that the library's data is securely preserved in case of any unforeseen events.*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    string row;
    cout << "Catalog backup process initiated." << endl;

    cout << "Opening main catalog to get data." << endl;
    ifstream mainFileIn("mainCatalog.txt", ios::in);
    if(!mainFileIn.is_open()){
        cout << "Error in opening main catalog." << endl;
    }
    else{
        cout << "Main catalog opened successfully." << endl;
    }

    cout << "\nOpening backup catalog to send data." << endl;
    ofstream backupFileOut("backupCatalog.txt", ios::app);
    if(!backupFileOut) cout << "Error in opening backup catalog." << endl;
    else{
        cout << "Backup catalog opened successfully." << endl;
    }

    while(!mainFileIn.eof()){
        getline(mainFileIn, row);
        backupFileOut << row << endl;
    }
    mainFileIn.close();
    backupFileOut.close();
    cout << "\nData copied successfully." << endl;
}