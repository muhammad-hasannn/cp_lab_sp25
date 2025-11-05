#include<iostream>
using namespace std;


int main(){
    int a[7];

    //getting elements
    for(int i = 0; i < 7; i++){
        cout << "Enter element no. "<<i+1<<": ";
        cin >> a[i];
    }

    cout << "\nOriginal Array" << endl;
    for(int i = 0; i < 7; i++) cout << a[i] << " ";
    cout << endl;

    for(int i = 0; i < 7-1; i++){
        bool swaped = false;
        for(int j = 0; j < 7-i-1; j++){
            if(a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                swaped = true;
            }
        }

        if(!swaped) break; // if no swapping occurs at any place, stop the loop
    }

    cout << "\nSorted Array" << endl;
    for(int i = 0; i < 7; i++) cout << a[i] << " ";
    cout << endl;


}