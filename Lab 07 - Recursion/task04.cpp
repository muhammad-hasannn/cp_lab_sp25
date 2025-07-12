/*Growth Simulator
Write a C++ program that uses recursion to calculate the population size of rabbits after a specified number of months. 
The program should prompt the user to enter the initial number of rabbit pairs and the number of months for which they want to simulate the growth. 
Implement a recursive function to calculate the population size based on the following rules:
   •	Each pair of rabbits reproduces every month.
   •	Each pair produces exactly one new pair of offspring.
   •	Rabbits mature in one month and start reproducing.
   •	Assume no rabbits die during the simulation.
   •	After computing the population size, display the result to the user.
   •	Ensure that the program handles valid inputs and gracefully handles errors.*/

#include<iostream>
using namespace std; 

int growthSim(int month){
   if(month == 1 || month == 2) return 1;
   return growthSim(month - 1) + growthSim(month - 2);
}

int main(){
   int initialPairs = 0, month = 0;
   cout << "Welcome to the Rabbit popullation Growth Simulator" << endl << endl;

   cout << "Enter the initial number of rabbit pairs: ";
   cin >> initialPairs;
   cout << "Enter the number of months for simulation: ";
   cin >> month;

   cout << "\nAfter " << month << " months, Rabbits population will be: " << initialPairs*growthSim(month) << endl;
}