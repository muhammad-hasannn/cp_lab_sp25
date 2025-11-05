/*Write a C++ program that asks user to enter 10 integer values. Store those values in one dimensional array. Create another one dimensional array of same size, and store the values of first array in reverse order. Print the result on Screen.*/

#include<iostream>
using namespace std;

int main(){
    int n = 5;
    int a[n], rev[n];

    for(int i = 0; i < n; i++){
        cout << "Enter element no. '"<<(i+1)<<"': ";
        cin >> a[i];
    }

    // reversing
    for(int i = (n-1), j = 0; i >= 0; i--, j++){
        rev[j] = a[i];
    }

    cout << "Matrix - Orginal" << endl;
    cout << "----------------" << endl;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    cout << endl;
    cout << "Matrix - Reverse" << endl;
    cout << "----------------" << endl;
    for(int i = 0; i < n; i++){
        cout << rev[i] << " ";
    }
}