/*Motivational quote generator
You're developing a motivational quote generator where users can input a four-word quote, which will be
permanently stored. Since users may prefer mixed-case quotes, you'll present the final output for review
before saving it. After storing the words, the program will display the quote reconstructed with all
words in uppercase, providing a visual representation of how the quote would look with case conversion.
Sample:
Enter the first word for your quote: dream
Enter the second word: big
Enter the third word: dare
Enter the fourth word: to*/

#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
    string word[4];
    char choice;

    // getting quote fom user word by word
    cout << "Eter your 4-words based quote:" << endl;
    for(int i = 0; i < 4; i++){
        cout << "\tEnter word no. "<<(i+1)<<": ";
        getline(cin, word[i]);
    }

    //saving user's entered quote into file
    ofstream userOut("userQuote.txt", ios::app);
    if(!userOut.is_open()) cout << "Error in opening file to save user quote." << endl;
    else{
        for(int i = 0; i < 4; i++){
            userOut << word[i] << " ";
        }
        userOut << endl;
        cout << "\nUser quote saved successfully!" << endl;
        userOut.close();
    }

    // converting the quote unto uppercase
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < word[i].length(); j++){ 
            if(word[i][j] >= 97 && word[i][j] <= 122){
                word[i][j] -= 32;
            }
        }
    }

    // displaying the uppercase quote, & asking for verification
    cout << "\nHere's the upgraded version of your quote: " << endl;
    for(int i = 0; i < 4; i++){
        cout << word[i] << " ";
    }
    cout << endl;
    do{
        cout << "\nIs this how you want to save quote (uppercase)? (y/n): ";
        cin >> choice;

        if(choice != 'y' && choice != 'n'){
            cout << "\nPlease eneter valid choice! (y/n)" << endl;
        }

    }while(choice != 'y' && choice != 'n');

    // if approved by user, saving it into file
    if(choice == 'y'){
        ofstream upperOut("uppercaseQuote.txt", ios::app);
        if(!upperOut.is_open()) cout << "Error in opening file to save uppercase quote!" << endl;
        else{
            for(int i = 0; i < 4; i++){
                upperOut << word[i] << " ";
            }
            upperOut << endl;
            cout << "The uppercase quote has been saved successfully!" << endl;
            upperOut.close();
        }
    }
    else{
        cout << "\nTerminating program without saving..." << endl;
    }
    
}