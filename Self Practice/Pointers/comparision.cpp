#include<iostream>
using namespace std;


int main(){
    int a[5] = {8,5,10,6,9};
    int *i = &a[2];
    int *j = (a+2);

    if(i == j) cout << "You have write correct code!" << endl;
    else cout << "You written wrong code" << endl;


}