#include<iostream>
using namespace std;

int main(){
    //hardcoded blood types
    string acceptableBlood[8] = {"O-","O+","A-","A+","B-","B+","AB-","AB+"};
    string donorBlood[8][8] = {
        {"O-"},
        {"O-","O+"},
        {"O-","A-"},
        {"O-","O+","A-","A+"},
        {"O-","B-"},
        {"O-","O+","B-","B+"},
        {"O-","A-","B-","AB-"},
        {"O-","O+","A-","A+","B-","B+","AB-","AB+"}
    };

    cout << "------------------------"<<endl;
    cout << "***Blood Match System***"<<endl;
    cout << "------------------------"<<endl;
    cout << endl;

    int choice = 0, userBlood = 0, row = -1;

    do{
        cout << "List of Acceptable Blood Types:"<<endl;
        cout << endl;
        for(int i = 0, sNo = 1; i < 8; i++, sNo++){
            cout <<sNo<<". "<<acceptableBlood[i]<<endl; 
        }
        do{
            cout << "Enter the serial no. of your blood type: ";
            cin >> userBlood;
            if(userBlood <= 0 || userBlood >= 9){
                cout << "Invalid serial no. of blood type!"<<endl;
            }
        }while(userBlood <= 0 || userBlood >= 9);

        row = (userBlood - 1);

        cout << "Compatible blood types are: ";
        for(int j = 0; j < 8; j++){
            cout << donorBlood[row][j] << " ";
        }
        row = -1;

        cout << endl;
        cout << "Check another blood type? Enter 1 for Yes, 0 for No: ";
        cin >> choice;

    }while(choice != 0);
}
