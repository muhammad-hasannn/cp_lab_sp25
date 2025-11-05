/*printing number in decreasing order*/

#include<iostream>
using namespace std;

/*bad approach*/
void decreasingOrder(int n){
    if(n == 0 || n == 1){
        cout << n;
        return;
    }
    cout << n << " ";
    decreasingOrder(n-1);
}

/*good approach*/
void print(int start, int lim){
    if(start < lim) return;

    cout << start << " ";
    return print(--start, lim);
}



int main(){
    
    print(8, 0);
}