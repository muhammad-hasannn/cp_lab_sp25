/*Write a C++ program to search an element entered by user from array and display the searched element and its location.*/

#include<iostream>
using namespace std;

int main(){
    int size = 0;
    int target = 0;
    bool found = false;
    
    cout << "Enter the no. of elements in array: ";
    cin >> size;
    
    int a[size];

    for(int i = 0, sNo = 1; i < size; i++, sNo++){
        cout << "Enter the element no. "<<sNo<<" of array: ";
        cin >> a[i];
    }

    cout << "\nter the element to search in aaray: ";
    cin >> target;

    for(int i = 0, sNo = 1; i < size; i++, sNo++){
        if(a[i] == target){
            found = true;
            cout << "\nTarget element '"<<a[i]<<"' found at place no. '"<<sNo<<"'." << endl;
        }
    }
    if(!found){
        cout << "\nTargeted element not found." << endl;
    }
}