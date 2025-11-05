/*Scenario 3:
A student registration system automatically generates a unique registration code for each
student based on the following rules:
 Convert the first letter of the student’s name into its ASCII code
 Append the last two digits of the student’s ID to the ASCII code
Sample
Input: Name = Ali, ID = 2345
Output: 6545*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int id = 0;
    cout << "Enter your name: ";
    getline(cin,name);
    cout << "Enter your ID: ";
    cin >> id;
    string aStr; // here we are declaring a new data type of string, the name 'aStr' is bcuz, we'll convert int 'id' into string for extraction
    aStr = to_string(id); // here we are converting int 'id' into string so that we can extract digits from it and      'to_string(int_name)' is a function to convert any int into string
    cout << "Your registration number is: "<<int(name[0])<<aStr.substr(aStr.length()-2,2)<<endl;
    // int(name[0]) -> it is function to extract ascii value for any charachter of string, in square brackets 0 indicates that we have to get the ascii value first character in string.
    // aStr.substr(aStr.length()-2,2) -> as you know that we have already converted the integer ID to string and the it's new name is aStr, we have done this so that we can extract digits from it.                                          -> Now, let's understand it, the (aStr.length()-2,2) the -2 says that we have to go to the second last digit of our string(as we don't know the lenght of string), and the 2 says that, we have to extract the two digits.              -> aStr.subtsr() says that extract whatever is written in brackets, btw if we know that how many digits are there so it will be look like this aStr.substr(3,2) 3 indicates go to third place, and and 2 says exract two digits onwards, but we don't know the length of string so that is why we have written (aStr.length()-2,2) in brackets
     
}