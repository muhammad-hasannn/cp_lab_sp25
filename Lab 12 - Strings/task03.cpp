/*String Manipulator
Imagine we're developing a program tailored for creating user accounts, where the system necessitates specific
string manipulations to ensure the usernames adhere to the required format.
    • Convert the string to uppercase.
    • Replace all spaces with underscores ('_').
    • Reverse the string.
    • Return the modified string.*/

#include<iostream>
#include<string>
using namespace std;

int main() {
    string username;
    cout << "Enter a username: ";
    getline(cin, username);

    // first converting all characters in uppercase
    for (int i = 0; i < username.length(); i++) {
        if (username[i] > 96 && username[i] < 123) {
            username[i] -= 32;
        }
    }
    
    // replacing space with _
    for (int i = 0; i < username.length(); i++) {
        if (username[i] == ' ') {
            username[i] = '_';
        }
    }

    // flipping them
    int start = 0, end = username.length() - 1;
    while (start < end) {
        char temp = username[start];
        username[start] = username[end];
        username[end] = temp;
        start++;
        end--;
    }
    cout << "\nModified Username: " << username << endl;
}