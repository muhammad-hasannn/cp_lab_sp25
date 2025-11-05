#include<iostream>
using namespace std;

int main(){
    int i = 3, *x ;
    float j = 1.5, *y ;
    char k = 'c', *z ;
    cout<< "Value of i = "<< i << endl; 
    cout<< "Value of j = "<< j  << endl;
    cout<< "Value of k = "<< k <<endl;
    x = &i;
    y = &j;
    z = &k;
    cout<< "Original address in x: "<< x << endl;
    cout<< "Original address in y = "<< y << endl;
    cout<< "Original address in z = "<< z << endl;
    x++ ;
    y++ ;
    z++ ;
    cout<< "New address in x = "<< x << endl;
    cout<< "New address in y = "<< y << endl;
    cout<< "New address in z = "<< z  << endl;
}