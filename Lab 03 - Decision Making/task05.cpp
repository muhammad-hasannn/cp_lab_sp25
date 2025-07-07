/*Task 5


Imagine you are developing a program for a small business that sells handmade crafts. The owner recently bought a beautiful vase at a cost price (CPrice) and is trying to sell it at a selling price (SPrice). Your task is to create a program that will help the owner determine whether they made a profit, or incurred a loss.
Task Requirements:
a)	Prompt the user to enter the Cost Price (CPrice) of the vase.
b)	Prompt the user to enter the Selling Price (SPrice) of the vase.
    Profit Calculation: Profit = SPrice – Cprice
c)	Print a message displaying the profit amount to the user.
    Loss Calculation: Loss = CPrice – Sprice
d)	Print a message displaying the loss amount to the user.
e)	If CPrice is equal to SPrice, output a message indicating that there is no profit or loss.*/

#include<iostream>
using namespace std;
int main(){
    int cp = 0, sp = 0; // cp -> cost price & sp -> selling proce
    cout << "Enter the cost price of vase: ";
    cin >> cp;
    cout << "Enter the selling price of vase: ";
    cin >> sp;
    if(sp>cp){
        int profit = 0;
        profit = sp-cp;
        cout << "You have made a profit of "<<profit<<" rupees."<<endl;
    }
    else if(cp>sp){
        int loss = 0;
        loss = cp-sp;
        cout << "You have made a loss of "<<loss<<" rupees."<<endl;
    }
    else{
        cout << "Selling price is same as cost price."<<endl;
    }
}