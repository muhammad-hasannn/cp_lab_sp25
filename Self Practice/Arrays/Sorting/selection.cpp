#include<iostream>
using namespace std;

int main(){
    int a[5];

    //getting elements
    for(int i = 0; i < 5; i++){
        cout << "Enter element no. "<<i+1<<": ";
        cin >> a[i];
    }

    cout << "Original array" << endl;
    for(int i = 0; i < 5; i++) cout << a[i] << " ";
    cout << endl;

    //sorting
    for(int i = 0; i < 5-1; i++){
        int smallIndex = i; //assuming that the smallest element is at first index of unsorted array

        for(int j = i+1; j < 5; j++){ // j = i + 1 -> we'll start comparing from the next element 
            
            if(a[smallIndex] > a[j]){
                smallIndex = j; // you get small value than your asumed index, update it...
            }
        }
        swap(a[i], a[smallIndex]); // now swaping with the actual sammlest value of unsorted array
    }

    cout << "\nSorted array" << endl;
    for(int i = 0; i < 5; i++) cout << a[i] << " ";
    cout << endl;
}