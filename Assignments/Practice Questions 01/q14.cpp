/*14. Functions with Multiple Parameters: Greatest of Three Numbers
Task: Write a function findMax(int a, int b, int c) that determines the largest of three numbers. Call this function in main() to display the result.*/

#include<iostream>
using namespace std;

void findMax(int a, int b, int c){
    if(a > b && a > c){
        cout << "Largest number is: "<<a<<endl;
    }
    else if(b > a && b > c){
        cout << "Largest number is: "<<b<<endl;
    }
    else{
        cout << "Largest number is: "<<c<<endl;
    }
}

int main(){
    int a = 0, b = 0, c = 0;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    findMax(a, b, c);
}