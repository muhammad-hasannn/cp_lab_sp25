#include<iostream>
#include<string>
using namespace std;

bool isPalindrom(string word, int start, int end){
    if(start >= end) return true; // it means we have successfully go through complete array
    if(word[start] != word[end]) return false;
    return isPalindrom(word, start + 1, end - 1);
}

int main(){
    string word;
    cout << "Enter ka word: ";
    cin >> word;

    cout << endl;
    if(isPalindrom(word, 0, word.length()-1)) cout << "Palindrom" << endl;
    else cout << "Not a palindrom" << endl;
}