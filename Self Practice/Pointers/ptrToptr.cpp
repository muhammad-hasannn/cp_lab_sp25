#include<iostream>
using namespace std;

int main(){
    int a = 110;
    int *ptrA = &a;
    int **ptr2 = &ptrA;

    cout << "Value of a: " << a << endl;
    cout << "Address of a: " << ptrA << endl;
    cout << endl;
    cout << "Address of ptrA using ptr2: " << ptr2 << endl;
    cout << "Address of ptrA using &: " << &ptrA << endl;
    cout << endl;
    cout << "Value pointed by ptrA: " << *ptrA << endl;
    cout << "Vlaue pointed by ptr2: " << *ptr2 << endl; // you are derefrencing it one time
    // so it it will show value stored on it...

    cout << "Value pointed by address which is on ptr2: " << **ptr2 << endl;

}