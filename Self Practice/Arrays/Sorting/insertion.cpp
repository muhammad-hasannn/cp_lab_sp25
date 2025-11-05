#include<iostream>
using namespace std;

int main(){
    int a[5];

    for(int i = 0; i < 5; i++){
        cout << "Enter element no. "<<i+1<<": ";
        cin >> a[i];
    }

    cout << "\nOriginal array" << endl;
    for(int i = 0; i < 5; i++) cout << a[i] << " ";
    cout << endl;

    // sorting
    for(int i = 1; i < 5; i++){ //weare considering forst element as sorted
        int curr = a[i];
        int pre = i - 1;

        while(pre >= 0 && a[pre] > curr){
            a[pre+1] = a[pre];
            pre--;
        }
        a[pre+1] = curr; // placing current element at it's right place
    }

    cout << "\nSorted array" << endl;
    for(int i = 0; i < 5; i++) cout << a[i] << " ";
    cout << endl;


}