#include<iostream>
using namespace std;

int sort(int a[], int n, int k){
    for(int i = 0; i < k; i++){
        int smallestIndex = i;
        for(int j = i+1; j < n; j++){
            if(a[smallestIndex] > a[j]){
                smallestIndex = j;
            }
        }
        swap(a[i], a[smallestIndex]);
    }
    return a[k-1];
}


int main(){
    int a[5];
    int k = 0;

    //getting elements
    for(int i = 0; i < 5; i++){
        cout << "Enter element no. "<<i+1<<": ";
        cin >> a[i];
    }

    cout << "Enter the number till which you want to sort array: ";
    cin >> k;

    cout << sort(a, 5, k); 


}