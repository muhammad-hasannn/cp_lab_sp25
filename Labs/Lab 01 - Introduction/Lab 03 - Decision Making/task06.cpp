/*Task 6


Write a C++ program that takes a digit (0-9) as input from the user and print its spelling using a switch statement.*/

#include<iostream>
using namespace std;
int main(){
    int dig = 0;
    cout << "Enter any digit between 0 & 9: ";
    cin >> dig;
    switch(dig){
        case 0:
        cout << "Its spelling is \'Zero\'"<<endl;
        break;
        case 1:
        cout << "Its spelling is \'One\'"<<endl;
        break;
        case 2:
        cout << "Its spelling is \'Two\'"<<endl;
        break;
        case 3:
        cout << "Its spelling is \'Three\'"<<endl;
        break;
        case 4:
        cout << "Its spelling is \'Four\'"<<endl;
        break;
        case 5:
        cout << "Its spelling is \'Five\'"<<endl;
        break;
        case 6:
        cout << "Its spelling is \'Six\'"<<endl;
        break;
        case 7:
        cout << "Its spelling is \'Seven\'"<<endl;
        break;
        case 8:
        cout << "Its spelling is \'Eight\'"<<endl;
        break;
        case 9:
        cout << "Its spelling is \'Nine\'"<<endl;
        break;
        default:
        cout << "Invalid input!"<<endl;
        break;
    }

}