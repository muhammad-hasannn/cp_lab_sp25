/*Write program & draw a flowchart that reads the height, length, and width of the rectangular box, Calculates and displays the volume.
Note: Volume = lwh.*/

#include<iostream>
using namespace std;
int main(){
    float length = 0.00, height = 0.00, width = 0.00, vol = 0.00;
    cout << "Enter height of rectangular box: ";
    cin >> height;
    cout << "Enter length of rectangular box: ";
    cin >> length;
    cout << "Enter width of rectangular box: ";
    cin >> width;
    vol = height*length*width;
    cout << "The volume of rectangular box is: "<<vol;
}