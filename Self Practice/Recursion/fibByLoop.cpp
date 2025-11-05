/*fibonacci sequence is zero indexed*/

#include<iostream>
using namespace std;

/*1. printing series upto given no. of terms*/
void printSeq(){
    int a = 0, b = 1, next = 0, terms = 0;
    cout << "Enter no. of terms which you want to see of fibonacci sequence: ";
    cin >> terms;
    
    if(terms == 1) cout << a << endl;
    else if(terms == 2) cout << a << " " << b << endl;
    else{
        cout << a << " " << b << " ";
        for(int i = 2; i < terms; i++){ // i = 2; because we have already printed two terms
            next = a+b;
            cout << next << " ";
            a = b;
            b = next;
        } 
    }
}

/*2. printing the nth term of fibonacci sequence*/
void printTerm(){
    int a = 0, b = 1, next = 0, term = 0;
    cout << "Enter index of number: ";
    cin >> term;

    if(term == 1) cout << a << endl;
    else if(term == 2) cout << b << endl;
    else{
        for(int i = 2; i < term; i++){
            next = (a+b);
            a = b; 
            b = next;
        }
        cout << next << endl;
    }
}

/*3. printing seq upto given no. number (we'll stop if it reaches limit or crosses it)*/
void printUptoLimit(){
    int a = 0, b = 1, next = 0, limit = 0;
    bool limitReached = false;
    cout << "Enter the number till which you want to see fibonacci sequence: ";
    cin >> limit;

    if(limit == 0) cout << a << endl;
    else if(limit == 1) cout << a << " " << b << endl;
    else{
        cout << a << " " << b << " ";
        while(!limitReached){
            next = a + b;
            if(next >= limit){
                limitReached = true;
                continue;
            }
            cout << next << " ";
            a = b;
            b = next;
        }
    }
}

int main(){

    printUptoLimit();

}