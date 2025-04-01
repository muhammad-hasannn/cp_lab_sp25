// Decreasing L
// Hollow square
// Combination of L & square

#include<iostream>
using namespace std;
int main(){

    // for inverted triangle
    cout << "1. Inverted triangle."<<endl;
    for(int i = 1; i <= 5; i++){
        for(int j = 5; j >= i; j--){
            cout << "* ";
        }
        cout << endl;
    }

    //for hollow square
    cout << "2. Hollow square."<<endl;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= 5; j++){
            if(i == 1 || i == 5 || j == 1 || j == 5){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }

    cout << "3. Combination of L & square."<<endl;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){ // for simple L
            cout << "* ";
        }
        for(int k = 5; k > i; k--){ // for spaces after L
            cout << "  ";
        }
        for(int k = 1; k <= 5; k++){ // for square
            if(i == 1 || i == 5 || k == 1 || k ==5){
                cout << "* ";
            }
            else{
                cout << "  ";
            }
        }
        cout << endl;
    }
}