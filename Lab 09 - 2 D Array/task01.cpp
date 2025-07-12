/*Write a program to create a 2D array of size 3x3. The program takes input for each cell in the array and then calculates and displays the sum of each row.
For example:
1 2 3
4 5 6
7 8 9
	Sum of first row is 6 
	Sum of second row is 15
	Sum of third row would is 24*/

#include<iostream>
using namespace std;


int main(){
    int a[3][3];
    int rowSum[3] = {0};
    for(int i = 0; i < 3; i++){
        cout << "Row no. " <<(i+1)<<": " << endl;
        for(int j = 0; j < 3; j++){
            cout << "\tEnter value of coloumn no. "<<(j+1)<<": ";
            cin >> a[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            rowSum[i] += a[i][j];
        }
    }

    cout << endl;
    for(int i = 0; i < 3; i++){
        cout << "Sum of all elements of row no. '"<<(i+1)<<"': " <<rowSum[i] << endl;
    }
}