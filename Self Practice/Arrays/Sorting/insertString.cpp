#include<iostream>
#include<string>
using namespace std;

int main(){
    string names[5];

    // getting input
    for(int i = 0; i < 5; i++){
        cout << "Enter name no. "<<i+1<<": ";
        getline(cin, names[i]);
    }

    cout << "\nOriginal Names" << endl;
    for(int i = 0; i < 5; i++) cout << names[i] << " ";
    cout << endl;

    //sorting
    for(int i = 1; i < 5; i++){
        string curr = names[i];
        int pre = i-1;
        while(pre >= 0 && names[pre] > curr){
            names[pre + 1] = names[pre];
            pre--;
        }
        names[pre + 1] = curr; 
    }

    cout << "\nSorted Array" << endl;
    for(int i = 0; i < 5; i++) cout << names[i] << " ";
    cout << endl;
}