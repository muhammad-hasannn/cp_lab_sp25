/*Write a C++ program to convert an array into ascending order.*/

#include<iostream>
using namespace std;

int main(){
    int a[5];

    for(int i = 0, sNo = 1; i < 5; i++, sNo++){
        cout << "Enter the element no. "<<sNo<<" of array: ";
        cin >> a[i];
    }

    cout << "Original array:" << endl;
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }

    cout << endl;
    cout << "Sorted array in ascending order:" << endl;

    //sorting
    for(int i = 0; i < (5-1); i++){
        for(int j = 0; j < 5-1-i; j++){
            if(a[j] > a[j+1]){
                int temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
    }

    //displaying sorted array
    for(int i = 0; i < 5; i++){
        cout << a[i] << " ";
    }
}