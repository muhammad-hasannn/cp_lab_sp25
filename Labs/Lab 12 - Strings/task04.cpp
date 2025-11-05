/*Capatalize Sentences in a Paragraph
Write a program that takes a paragraph as input and formats it into a well-structured document.
The program should capitalize the first letter of each sentence, ensure proper spacing between words, and handle
special cases such as abbreviations and proper nouns.
Requirements:
    • Prompt the user to enter a sentence.
    • Read the input sentence from the user.
    • Convert the first letter of each word to uppercase.
    • Print the modified sentence with the capitalized words.*/

#include<iostream>
#include<string>
using namespace std;

int main() {
    string sent;
    cout << "Enter a sentence with four words: ";
    getline(cin, sent);

    size_t pos1 = sent.find(' ');
    size_t pos2 = sent.find(' ', pos1 + 1);
    size_t pos3 = sent.find(' ', pos2 + 1);

    string word[4] = {sent.substr(0, pos1), sent.substr(pos1+1, (pos2-pos1)-1), sent.substr(pos2+1, (pos3-pos2)-1), sent.substr(pos3+1)};
    
    for(int i = 0; i < 4; i++){
        if(word[i][0] >= 97 && word[i][0] <= 122){
            word[i][0] -= 32;
        }
    }

    cout << "\nFormatted Sent: ";
    for(int i = 0; i < 4; i++){
        cout << word[i] << " ";
    }
    cout << endl;
}