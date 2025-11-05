/*Write a program that takes a 3x3 matrix as input and asks for a number entered and prints out its position in the matrix. It displays not found if the number is not in the matrix.
For example: 
1 2 3
4 5 6
7 8 9
Input Example 1:
Enter a number to find: 4
Found! Position: [1] [0]
Input Example 2:
Enter a number to find: 0
Not Found*/

#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    int target = 0;
    bool found = false;

    for(int i = 0; i < 3; i++){
        cout << "\nRow no. " << (i+1) << endl;
        for(int j = 0; j < 3; j++){
            cout << "\tEnter value coloumn no. '"<<(j+1)<<"': ";
            cin >> a[i][j];
        }
    }

    cout << "\nEnter element to find its position: ";
    cin >> target;

    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(target == a[i][j]){
                found = true;
                break;
            }
        }
        if(found){
            break;
        }
    }
    if(found){
        cout << "\nTarget: " <<target<<" found at position: ["<<i<<"]["<<j<<"]." << endl;
    }
    else{
        cout << "\nTarget not found." << endl;
    }
}