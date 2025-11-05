/*Calculating Area with Different Shapes 

Picture yourself developing a geometry calculator program using function overloading. This application allows users to calculate the area
of various shapes such as circles, rectangles, and triangles. Users can input the required dimensions for each shape, and the program
intelligently selects the appropriate function to calculate and display the area.*/

#include<iostream>
using namespace std;

float cirArea(float r){
    return (3.14*(r*r));
}

float recArea(float l, float w){
    return l*w;
}

float triArea(float b, float h){
    return (1/2)*b*h;
}

int main(){
    int choice = 0;

    do{
        cout << endl;
        cout << "1. Calculate area of circle." << endl;
        cout << "2. Calculate area of rectangle." << endl;
        cout << "3. Calculate area of triangle." << endl;
        cout << "4. Exit." << endl;
        cout << "Enter choiec: ";
        cin >> choice;

        switch(choice){
            case 1:{
                cout << endl;
                float radius = 0.00;
                cout << "Enter radius: ";
                cin >> radius;
                cout << "Area of circle is: " << cirArea(radius) << endl;
                break;
            }

            case 2:{
                cout << endl;
                float length = 0.00, width = 0.00;
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                cout << "Area is: " << recArea(length, width) << endl;
                break;
            }

            case 3:{
                cout << endl;
                float base = 0.00, height = 0.00;
                cout << "Enter base: ";
                cin >> base;
                cout << "Enter height: ";
                cin >> height;
                cout << "Area is: " << triArea(base, height) << endl;
                break;
            }

            case 4: cout << "\nExiting program." << endl;
            break;

            default: cout << "\nInvalid choice!" << endl;
            break;
        }
    }while(choice != 4);
}