/*Task 1: Character Classification

Write a C++ program that checks whether a given character is a vowel, consonant, or a digit. The program should prompt the user to enter a character and then display a message indicating the classification.*/

#include<iostream>
using namespace std;
int main(){
    char a;
    cout << "Enetr any character: ";
    cin >> a;
    if(a=='a' || a=='A' || a=='e' || a=='E' || a=='i' || a=='I' || a=='o' || a=='O' || a=='u' || a=='U'){
        cout <<"\'"<<a<<"\' is a vowel."<<endl;
    }
    else if(a>='0' && a<='9'){ 
        cout <<"\'"<<a<<"\' is a digit."<<endl;
    }
    else{
        cout <<"\'"<<a<<"\' is consonent."<<endl;
    }

}