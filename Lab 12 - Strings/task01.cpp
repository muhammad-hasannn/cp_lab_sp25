/*Greeting Card Company
Imagine a greeting card company that allows customers to personalize their greeting cards with custom messages.
One of the features provided by the company is the ability to replace specific words in their messages with other
words.
This is particularly useful for creating a consistent theme across multiple cards, such as changing "Birthday" to
"Anniversary" or "Congratulations" to "Well Done". The company has tasked you with developing a software
solution that will allow customers to easily make these changes to their messages.*/

#include<iostream>
#include<string>
using namespace std;

int main() {
    string message, oldWord, newWord;
    cout << "Enter your message: ";
    getline(cin, message);
    cout << endl;

    cout << "Enter the word you want to replace: ";
    cin >> oldWord;
    cout << "Enter the new word: ";
    cin >> newWord;

    size_t pos = message.find(oldWord); // size_t -> special sort of data type which is used to store index or size of string
    if (pos == string::npos) { // means not found
        cout << "Word not found!" << endl;
    }
    else {
        message.replace(pos, oldWord.length(), newWord);
        cout << "\nUpdated Message: " << message << endl;
    }
}