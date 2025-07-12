/*Number Comparison Utility

You are designing a program to assist users in analyzing a set of numbers. The application should allow users to enter between two to four numbers and then determine the smallest and largest numbers among them. Additionally, users should be able to compare different combinations of numbers, such as comparing two, three, or four numbers simultaneously. This flexibility enables users to make quick comparisons and analyze data effectively*/

#include<iostream>
using namespace std;

int findSmall(int a, int b){
    if(a <= b) return a;
    else return b;
}

int findSmall(int a, int b, int c){
    if(a <= b && a <= c) return a;
    else if(b <= a && b <= c) return b;
    else return c;
}

int findSmall(int a, int b, int c, int d){
    if(a <= b && a <= c && a <= d) return a;
    else if(b <= a && b <= c && b <= d) return b;
    else if(c <= a && c <= b && c <= d) return c;
    else return d;
}

int findLarg(int a, int b){
    if(a >= b) return a;
    else return b;
}

int findLarg(int a, int b, int c){
    if(a >= b && a >= c) return a;
    else if(b >= a && b >= c) return b;
    else return c;
}

int findLarg(int a, int b, int c, int d){
    if(a >= b && a >= c && a >= d) return a;
    else if(b >= a && b >= c && b >= d) return b;
    else if(c >= a && c >= b && c >= d) return c;
    else return d;
}

int main(){
    int a[4];

    cout << "Enter 4 numbers: " << endl;
    for(int i = 0; i < 4; i++) cin >> a[i];

    cout << endl;
    cout << "***********************" << endl;
    cout << "Smallest among first two is: " << findSmall(a[0], a[1]) << endl;
    cout << "Largest among first two is: " << findLarg(a[0], a[1]) << endl;

    cout << "***********************" << endl;
    cout << "Smallest among first three is: " << findSmall(a[0], a[1], a[2]) << endl;
    cout << "Largest among first three is: " << findLarg(a[0],a[1], a[2]) << endl;

    cout << "***********************" << endl;
    cout << "Smallest among all is: " << findSmall(a[0], a[1], a[2], a[3]) << endl;
    cout << "Largest among all is: " << findLarg(a[0], a[1], a[2], a[3]) << endl;
}