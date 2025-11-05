/*9. Nested Loops: Right-Angled Triangle Pattern
Task: Write a program that prints a right-angled triangle of stars (*) for a given height using nested loops. Example for n = 4:
*
**
***
****
*/

#include<iostream>
using namespace std;


int main(){
    int rows = 0;
    cout << "Enter no. of rows: ";
    cin >> rows;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}