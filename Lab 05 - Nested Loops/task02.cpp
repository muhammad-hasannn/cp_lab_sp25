//Floyd's triangle

#include<iostream>
using namespace std;
int main(){
    int rows = 0, p = 1; //p is for number on pattern
    cout << "Enter no. of rows: ";
    cin >> rows;
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= i; j++){
            cout << p<<" ";
            p++;
        }
        cout << endl;
    }
}