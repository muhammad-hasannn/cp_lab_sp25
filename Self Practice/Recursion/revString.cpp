#include<iostream>
#include<string>
using namespace std;

string rev(string name, int length){
    if(length < 0) return "";

    // this is also correct
    // reverse += name[length] + rev(name, length-1);

    /*but let's convert that one character in string also*/
    return string(1, name[length]) + rev(name, length-1);
}


/*to check if a string is palindrom or not*/
bool check(string s, int i){
    if(i >= s.length()/2) return true;

    // if corresponding doesn't matches
    if(s[i] != s[s.length()-i-1]) return false;

    return check(s, i+1);
}

int main(){
    string name = "mom";
    

    cout << check(name, name.length()-1);
}