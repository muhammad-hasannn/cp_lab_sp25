// #include<iostream>
// using namespace std;

// void change(int *ptr){
//     *ptr += 10;
// }

// int main(){
//     int a = 10;
//     int *ptrA = &a;
//     // change(ptrA); // this is also correct
//     change(&a);
//     cout << "Value: " << a << endl;
// }


/*Swaping function*/

#include<iostream>
using namespace std;

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int x = 0, y = 0;
    cout << "Enter x: ";
    cin >> x;
    cout << "Enter y: ";
    cin >> y;
    cout << "\nValue of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    cout << endl;
    cout << "After swaping: " << endl;
    swap(&x, &y);
    cout << "\nValue of x: " << x << endl;
    cout << "Value of y: " << y << endl;
    


}