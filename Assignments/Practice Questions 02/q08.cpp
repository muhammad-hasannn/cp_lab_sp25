#include<iostream>
using namespace std;

int sum(int n){
    if(n == 0) return n;
    return n + sum(n-1);
}

int main(){
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;
    cout << "\nSum is: " << sum(num) << endl;
}