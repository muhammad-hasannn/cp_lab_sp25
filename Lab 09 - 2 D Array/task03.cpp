/*Write a program which calculates the transpose of a 3x3 matrix.*/

#include<iostream>
using namespace std;


int main(){
    int a[3][3], aTrans[3][3];

    for(int i = 0; i < 3; i++){
        cout << "\nRow no. " << (i+1) << endl;
        for(int j = 0; j < 3; j++){
            cout << "\tEnter value coloumn no. '"<<(j+1)<<"': ";
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            aTrans[i][j] = a[j][i];
        }
    }

    cout << "\nOriginal - Matrix" << endl;
    cout << "-------------------" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nTranspose - Matrix" << endl;
    cout << "-------------------" << endl;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << aTrans[i][j] << " ";
        }
        cout << endl;
    }


}