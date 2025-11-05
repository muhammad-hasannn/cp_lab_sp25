/*15. Functions with Scope Demonstration: Local and Global Variables
Task: Develop a program that demonstrates the difference between local and global variables by modifying a global variable inside a function.*/

#include<iostream>
using namespace std;

int global = 10;

void globalVar(){
    global += 10;
    
}

void localVar(int a){
    cout << "Actual value which was passed: "<<a<<endl;
    a += 10;
    cout << "After doing changes in user defined function: "<<a<<endl;
}


int main(){
    cout << "Actual value of global variable: "<<global<<endl;
    globalVar();
    cout << "After doing some chages in user defined function: "<<global<<endl;

    //it's actual value was 10 but as we have changed it in function and it was a global vriable,
    //so we got updated value

    int local = 50;
    cout << "Local variable's actual value: "<<local<<endl;
    localVar(local);
    cout << "It is still same in main function: "<<local;


}