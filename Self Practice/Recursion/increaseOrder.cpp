#include<iostream>
using namespace std;

void print(int start, int lim){
    if(lim == 0) return; // edge case

    if(start > lim) return; // base case
    
    cout << start << " ";
    return print(++start, lim);
}



int main(){
    print(1, 5);

}