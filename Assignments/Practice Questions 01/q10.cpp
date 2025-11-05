/*10. Nested Loops: Number Pyramid Pattern
Task: Create a program that prints a number pyramid based on the user input. Example for n = 4:
   1   
  12 1  
 123 21 
1234 321
*/

#include<iostream>
using namespace std;


int main(){
    int rows = 0;
    cout << "Enter no. of rows: ";
    cin >> rows;
    for(int i = 1; i <= rows; i++){
        for(int j = rows; j >= i; j--){
            cout << " ";
        }
        for(int k = 1, p = 1; k < i; k++, p++){
            cout <<p;
        }
        for(int l = 1, p = i; l <= i; l++, p--){
            cout <<p;
        }
        cout << endl;
    }
}