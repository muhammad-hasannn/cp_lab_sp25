// 1. Filled stars
// 2. Hollow stars
// 3. Pyramid

#include<iostream>
using namespace std;
int main(){
    int choice = 0;
    cout << "Welcome to star pattern generator."<<endl;
    cout << "Choose the type of star pattern you want to print."<<endl;
    cout << "1. Filled Stars"<<endl;
    cout << "2. Hollow Stars"<<endl;
    cout << "3. Pyramid"<<endl;
    cout << "Enter your choice: ";
    cin >> choice;

    //Filled stars (L)
    if(choice == 1){
        int rows = 0;
        cout << "Enter no. of rows: ";
        cin >> rows;
        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= i; j++){
                cout << "*";
            }
            cout << endl;
        }
    }

    //Hollow L shape
    else if(choice == 2){
        int rows = 0;
        cout << "Enter no. of rows: ";
        cin >> rows;
        for(int i = 1; i <= rows; i++){
            for(int j = 1; j <= i; j++){
                if(i == 1 || i == rows || j == 1 || j ==i){
                    cout << "*";
                }
                else{
                    cout << " ";
                }
            }
            cout << endl;
        }
    }

    //normal pyramid
    else if(choice == 3){
        int rows = 0;
        cout << "Enter no. of rows: ";
        cin >> rows;
        for(int i = 1; i <= rows; i++){
            for(int j = rows; j >= i; j--){
                cout << " ";
            }
            for(int k = 1; k <= i; k++){
                cout << "* ";
            }
            cout << endl;
        }
    }

    else{
        cout << "Invalid choice"<<endl;
    }

}