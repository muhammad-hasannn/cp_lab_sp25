/*8. Loop Control Instructions (Do-While Loop): Number Guessing Game
Task: Write a simple number guessing game where the user must guess a randomly generated number between 1 and 100. Use a do-while loop to keep prompting the user until they guess correctly.*/

#include<iostream>
using namespace std;


int main(){
    int rand = 65, userInput = 0, turns = 0;
    do{
        cout << "System has generated a random no. b/w 1 & 100. Guess it! ";
        cin >> userInput;
        turns++;
    }while(userInput != rand);
    cout << "You gussed it in \'"<<turns<<"\' turn(s)."<<endl;
}