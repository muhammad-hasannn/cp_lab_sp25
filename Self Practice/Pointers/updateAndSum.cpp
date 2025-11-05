#include<iostream>
using namespace std;

int maximum(int *a, int size){
    int max = INT16_MIN;

    for(int i = 0; i < size; i++){
        if(*(a + i) > max){
            max = *(a + i);
        }
    }

    return max;
}

int main(){
    int a[5];
    
    //getting elements
    for(int i = 0; i < 5; i++){
        cout << "Enter element no. "<<i+1<<": ";
        cin >> a[i];
    }

    cout << "Actual array: " << endl;
    for(int i = 0; i < 5; i++) cout << a[i] << " ";
    cout << endl;

    //updating them and calculating sum
    int *ptr = a;
    int sum = 0;

    for(int i = 0; i < 5; i++){
        *(ptr + i) += 10;
        sum += *(ptr + i);
    }

    int max = maximum(a, 5);

    cout << "Updated array:" << endl;
    for(int i = 0; i < 5; i++) cout << a[i] <<" ";
    cout << endl;
    cout << "Maximum element is: " << max << endl;
}