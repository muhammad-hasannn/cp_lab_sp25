/*16. Menu-Driven Program: Temperature Converter
Task: Write a menu-driven program that allows the user to:
1.	Convert Celsius to Fahrenheit.
2.	Convert Fahrenheit to Celsius.
3.	Exit the program.
Use a loop to keep the menu active until the user chooses to exit.*/

#include<iostream>
using namespace std;

void celToFah(float temp){
    cout << "Temperature in Fahrenhite: "<<(temp*(9/5)+32)<<endl;
}

void fahToCel(float temp){
    cout << "Temperture in Celcius is: "<<((temp-32)*5/9)<<endl; 
}

int main(){
    float temp= 0.00;
    int choice = 0;
    cout << endl;
    cout << "***Welcome to Temperature Converter***"<<endl;
    cout << endl;
    do{
        cout << "TO convert from Celsius to Fahrenhite, Press '1'"<<endl;
        cout << "TO convert from Fahrenhite to Celsius, Press '2'"<<endl;
        cout << "To exit, Press '0'"<<endl;
        cout << "Enter choice: ";
        cin >> choice;
        if(choice == 1){
            cout << "Enter temperature in celsius: ";
            cin >> temp;
            celToFah(temp);
        }
        else if(choice == 2){
            cout << "Enter temperature in fahrenhite: ";
            cin >> temp;
            fahToCel(temp);
        }
        else if(choice == 0){
            cout << "program terminated..."<<endl;
        }
        else{
            cout << "invalid choice!"<<endl;
        }
    }while(choice != 0);
}
