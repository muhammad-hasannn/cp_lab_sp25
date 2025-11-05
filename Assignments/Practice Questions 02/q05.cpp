#include<iostream>
using namespace std;

int main(){
    float scores[3][4][2] =
    {
        { // student 1
            {7.5, 20.5}, // sub 1, two marks
            {12, 22.5},
            {22, 33.5},
            {43, 21.5}
        },
        {
            {4.5, 21.5},
            {13, 23.5},
            {34, 65},
            {45, 54.5}
        },
        {
            {45.5, 90.5},
            {62, 26.5},
            {43, 55},
            {34, 23.4}
        }
    }; 

    float marks = 0.00;

    for(int i = 0; i < 3; i++){
        cout << "\nStudent no. " << i+1 << endl;
        for(int j = 0; j < 4; j++){
            cout << "\tSubject no. " << j+1 << endl;
             for(int k = 0; k < 2; k++){
                marks += scores[i][j][k]; 
            }
            cout << "\t\tMarks are: " << marks << endl;
        }
    }
}