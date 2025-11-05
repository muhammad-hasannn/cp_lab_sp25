/*
input -> 3
output -> 3 2 1
*/

#include<iostream>
using namespace std;

void print(int start, int lim){
    if(start > lim) return;

    print(start + 1, lim);
    cout << start << " ";

}



int main(){
    print(1, 3);

}