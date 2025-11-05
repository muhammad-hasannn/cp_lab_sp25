#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a;
    int size;
    cout << "Enter no. of elements: ";
    cin >> size;

    for(int i = 0; i < size; i++){
        int val;
        cout << "Enter element no. "<<i+1<<": ";
        cin >> val;
        a.push_back(val);
    }

    cout << "\nElement   Value  Histogram" << endl;
    for(int i = 0; i < size; i++){
        cout << i << "         " << a[i] << "      ";
        for(int j = 0; j < a[i]; j++) cout << "*";
        cout << endl;
    }
}