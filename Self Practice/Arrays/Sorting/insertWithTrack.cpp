#include<iostream>
using namespace std;


int main(){
    int a[5];

    //getting elements
    for(int i = 0; i < 5; i++){
        cout << "Enter element no. "<<i+1<<": ";
        cin >> a[i];
    }

    cout << "\nOriginal Array" << endl;
    for(int i = 0; i < 5; i++) cout << a[i] << " ";
    cout << endl;

    for(int i = 1; i < 5; i++){
        int curr = a[i];
        int pre = i - 1;

        while(pre >= 0 && a[pre] > curr){
            a[pre+1] = a[pre];
            pre--;
        }
        a[pre + 1] = curr;
        cout << "Ouput after pass "<<i<<": ";
        for(int k = 0; k < 5; k++) cout << a[k] << " ";
        cout << endl;
    }

    cout << "\nSorted Array" << endl;
    for(int i = 0; i < 5; i++) cout << a[i] << " ";
    cout << endl;
}