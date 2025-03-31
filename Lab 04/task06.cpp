/*Multiplication Visualization

To enhance the multiplication concept of your students you decide to make program which help then to visualize the how multiplication is done. Write   C++ programming language using do-while loop for visualization of multiplication of table of any number enter by user*/

#include<iostream>
using namespace std;
int main(){
    int num = 0, lim = 0;
    cout << "Enter number of which you want to see table: ";
    cin >> num;
    cout << "Enter number till which you want to multiplication: ";
    cin >> lim;
    for(int i = 1; i <= lim; i++){
        cout<<num <<" * "<<i<<" = "<<num*i<<endl;
    }
}