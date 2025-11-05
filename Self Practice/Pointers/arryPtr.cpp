#include<iostream>
using namespace std;


int main(){
    int a[3] = {8,5,10};
    cout << a << endl;
    cout << *a << endl;

    // int *ptr = &a; // this will throw error, because an array variable implicitly stores the address of 0th index
    // this ^ is correct...but the way of declaring is wrong

  
    int *ptr = a;
    cout << ptr << endl;

    cout << "For loop: " << endl;
    for(int i = 0; i < 3; i++){
        cout << *(ptr + i) << endl;
    }

    cout << endl;
    //another approach
    for(int i = 0; i < 3; i++){
        cout << *(a + i) << endl;
    }

    cout << endl;
    //i[num] it is same as *(num + i)
    for(int i = 0; i < 3; i++){
        cout << i[a] << endl;
    }
    


    cout << endl;
    cout << "Address" << endl;
    for(int i = 0; i < 3; i++){
        cout << a + i << endl;
    }

}