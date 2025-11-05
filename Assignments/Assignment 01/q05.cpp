/*Scenario 2:
A number guessing game is designed for entertainment purposes where the system generates a
random number between 1 and 50. The player has to guess the number, and the system
provides feedback based on the player's input:
 "Too Low" if the guess is smaller than the number
 "Too High" if the guess is larger than the number
 "Correct! You guessed in X attempts" when the guess is correct
The system must count the total number of attempts using the prefix increment operator and
display the result when the correct guess is made.*/

#include<iostream>
using namespace std;
int main(){
    int r = 10; // r -> random number -> intialized by programmer
    int user_input = 0;
    int i = 0; // iterator to check no. of turns
    do{ // running it atleast one time if user guess the no. in first turn
        cout << "System has generated a random number between 1 and 50. Guess the number! ";
        cin >> user_input;
        if(user_input < r ){
            cout << "too low"<<endl;
        }
        else if(user_input > r){
            cout << "too high"<<endl;
        }
        else{
            cout << "you have gussed it correctly! "<<endl;
        }
        i++;
    } while (user_input!=r); // making it to excute until user gussed the right number
    cout << "gussed in: "<<i<<" turns"<<endl;
}