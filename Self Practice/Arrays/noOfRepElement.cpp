/*Writing a program to find total number of repeated elements & displaying all uniques elelemts*/

#include<iostream>
using namespace std;

int main(){
    int a[5] = {0};
    int unique[5] = {0};
    int temp = 0, repeatCount = 0, uniqueCount = 0;
    
    //getting elements from user
    for(int i = 0; i < 5; i++){
        cout << "Enter element no. '"<<(i+1)<<"': ";
        cin >> a[i];
    }
    

    for(int i = 0; i < 5; i++){
        bool isRepeated = false;
        temp = a[i]; // holding the element
        for(int j = 0; j < 5; j++){
            if(i == j) continue; // not comparing element with it self
            if(temp == a[j]){
                isRepeated = true;
                break;
            }
        }

        if(isRepeated){ //checking that if the element is already counted
            bool alreadyCounted = false;
            for(int k = 0; k < i; k++){ //running the till before the holded element
                if(temp == a[k]){
                    alreadyCounted = true;
                    break;
                }
            }
            if(!alreadyCounted){
                repeatCount++;
            }
        }

        // if it is not repeated
        if(!isRepeated){
            unique[uniqueCount] = temp;
            uniqueCount++;
        }
    }

    cout << "Total number of repeated elements is: "<<repeatCount<<"." << endl;
    cout << "Unique elements are: ";
    for(int i = 0; i < uniqueCount; i++){
        cout << unique[i] << " ";
    }

}