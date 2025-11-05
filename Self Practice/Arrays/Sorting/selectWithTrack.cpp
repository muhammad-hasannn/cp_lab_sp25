#include<iostream>
using namespace std;


int main(){
    int a[10];

    //getting elements
    for(int i = 0; i < 10; i++){
        cout << "Enter element no. "<<i+1<<": ";
        cin >> a[i];
    }

    cout << "\nOriginal Array" << endl;
    for(int i = 0; i < 10; i++) cout << a[i] << " ";
    cout << endl << endl;

    //sorting
    for(int i = 0; i < 10-1; i++){
        int largestIndex = i; // i'm considering that the largest element is at first of unsorted array
        for(int j = i+1; j < 10; j++){
            if(a[largestIndex] < a[j]){
                largestIndex = j;
            }
        }
        swap(a[i], a[largestIndex]);
        cout << "Current state: ";
        for(int k = 0; k < 10; k++) cout << a[k] << " ";
        cout << endl;
    }
    
    cout << "\nSorted Array" << endl;
    for(int i = 0; i < 10; i++) cout << a[i] << " ";
    cout << endl;


}