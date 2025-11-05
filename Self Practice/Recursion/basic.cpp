/*how recursion actually works*/

#include<iostream>
using namespace std;

void recurse(int n){
    if(n == 0){ // you are telling that, whenever n reaches 0, it should stop and return some value
        cout << "Done!"<<endl;
        return;
    }
    cout << "Hello world!"<<endl;
    recurse(n-1);
}


int main(){
    int n;
    cout << "Enter how many times you want to print 'Hello World': ";
    cin >> n;
    cout << "First line."<<endl;
    recurse(n);
}