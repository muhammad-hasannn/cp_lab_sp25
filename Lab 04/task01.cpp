/*A child is learning about the alphabet and wants to explore how letters are represented in computers using ASCII values. To make the learning experience fun and interactive, the 
child's parent decides to create a simple C++ program using for loop that prints ASCII 
values and their equivalent characters for the uppercase and lowercase in English alphabet.
e.g. (A to Z).*/

#include<iostream>
using namespace std;
int main(){
    for(int i = 97; i <= 122; i++){
        cout << "ASCII value "<<i<<". Corresponding character "<<char(i)<<"."<<endl;//done it only for lowercase alphabets
    }
}