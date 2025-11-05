#include<iostream>
using namespace std;

int main(){
    int x = 40;
    int *ptrX =  &x;

    cout << "1. Value of x: " <<x<< endl;
    cout << "2. Address of x using ptrX : " <<ptrX<<endl;
    cout << "3. Address of x using & operator: "<<&x<<endl;
    cout << "4. Value pointed by ptrX: "<<*ptrX<<endl;

    cout << "5. Value of x: "<<*(&x)<<endl; // * is dereferencing it from address
    
    string car = "mehran";
    string *ptrCar = &car;

    cout << "6. Name of car: "<<car<<endl;
    cout << "7. Address of car: "<<ptrCar<<endl;
    cout << "8. Car pointer is pointing on: "<<*ptrCar<<endl;
    cout << "9. Adress of car without pointer: "<<&car<<endl;
    cout << "10. Another example of derefrencing: "<<*(&car)<<endl;

    /*Changing value of variable using its pointer*/

    *ptrX = 50;
    *ptrCar = "FX";
    cout << "11. Now variable x is: "<<x<<endl;
    cout << "12. Now car is: "<<car<<endl;
    cout << "13. This line is to verify that the address is still same: "<<ptrX<<endl;



}