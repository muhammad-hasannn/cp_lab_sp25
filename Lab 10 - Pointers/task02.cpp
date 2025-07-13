/* Managing expenses
Imagine you're managing expenses for a grocery shopping trip with your friends. Your task is to
develop a function that computes the total expenditure and average spending per person based on the amounts
spent by each individual on groceries.

Implement the function to accept an array of integers representing the amounts spent by each person on groceries,
using call by reference with pointers.

OUTPUT Requirement
Print the total expenditure and average spending per person to provide a summary of the grocery shopping
expenses.*/

#include<iostream>
using namespace std;

void avgAndTotal(int *a, int size){
    int total = 0;
    for(int i = 0; i < size; i++) total += *(a + i);

    float avg = total/float(size);
    cout << "\nTotal expenditure is: " << total << endl;
    cout << "\nAverage per person os: " << avg << endl;
}

int main(){
    int person = 0;
    cout << "Enter no. of persons: ";
    cin >> person;

    int a[person];
    for(int i = 0; i < person; i++){
        cout << "Enter expense of person no. "<<i+1<<": ";
        cin >> a[i];  
    }
    avgAndTotal(a, person);
}