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
        
        for(int j = 0; j < 5-i-1; j++){
            if(a[j] > a[j+1]) swap(a[j], a[j+1]);
        }
    }

    cout << "Sorted array" << endl;
    for(int i = 0; i < 5; i++) cout << a[i] << " ";
    cout << endl;
}