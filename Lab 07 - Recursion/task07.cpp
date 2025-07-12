/*Fuel Efficiency Calculator
You're building a fuel efficiency calculator for a vehicle management system. The goal is to let users check fuel efficiency for cars, trucks, and airplanes using function overloading.

What You Have To Do:
Use function overloading to create separate fuel efficiency functions for: Cars, Trucks & Airplanes

Parameters by Vehicle Type:

Cars:
    int -> engine displacement
    double -> fuel consumption rate
    double -> vehicle weight

Trucks:
    int -> cargo weight
    float -> engine power
    double -> aerodynamic drag coefficient

Airplanes:
    string -> aircraft type
    double -> cruising altitude
    float -> airspeed

User Interaction:
Ask the user which vehicle they're calculating for
Get inputs for the required parameters
Calculate and display the fuel efficiency with correct units*/

#include<iostream>
using namespace std;

float calEfficiency(int disp, double consump, double weight){
    return ((disp / 1000.0) * (100.0 / consump) / (weight / 1000.0));
}

float calEfficiency(int cargoWeight, float pow, double aeroDynamicDrag){
    return (pow * 0.8) / ((cargoWeight / 1000.0) * aeroDynamicDrag + 1.0);
}

float calEfficiency(string type, double altitude, float speed){
    return (speed * 0.1) / (altitude / 10000.0 + 1.0);
}

int main(){
    int choice = 0;
    do{
        cout << endl;
        cout << "1. Calculate efficiency of car." << endl;
        cout << "2. Calculate efficiency of truck." << endl;
        cout << "3. Calculate efficiency of Airplane." << endl;
        cout << "4. Exit." << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if(choice == 1){
            int displacement = 0;
            double fuelCon = 0.00, weight = 0.00;

            cout << "\nEnter displacement: ";
            cin >> displacement;
            cout << "Enter fuel consumption: ";
            cin >> fuelCon;
            cout << "Enter vehcile weight: ";
            cin >> weight;

            cout << "\nFuel Efficiency is: " << calEfficiency(displacement, fuelCon, weight) << endl;
        }

        else if(choice == 2){
            int cargoWeight = 0;
            float enginePow = 0.00;
            double dragCoefficient = 0.00;

            cout << "\nEnter Cargo weight: ";
            cin >> cargoWeight;
            cout << "Enter engine power: ";
            cin >> enginePow;
            cout << "Enter aerodynamic drag coefficient: ";
            cin >> dragCoefficient;

            cout << "\nFuel Efficiency is: " << calEfficiency(cargoWeight, enginePow, dragCoefficient) << endl;
        }

        else if(choice == 3){
            string type;
            double altitude = 0.00;
            float speed = 0.00;

            cin.ignore();
            cout << "\nEnter aircraft type: ";
            getline(cin, type);
            cout << "Enter cruising altitude: ";
            cin >> altitude;
            cout << "Enter airspeed: ";
            cin >> speed;

            cout << "\nFuel Efficiency is: " << calEfficiency(type, altitude, speed) << endl;
        }

        else if(choice == 4) cout << "\nExting program." << endl;
        else cout << "\nInvalid choice!" << endl;
    }while(choice != 4);
}