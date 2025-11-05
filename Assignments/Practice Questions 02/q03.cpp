#include<iostream>
using namespace std;

void sort(int a[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size-i-1; j++){
            if(a[j] > a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}


int main(){
    int num[10];
    int numWithCalFreq[10]; // what if all numbers are unique, so that's why 10
    int freq[10]; // same reason as above
    
    // taking elements from user
    for(int i = 0; i < 10; i++){
        cout << "Enter element no. "<<i+1<<": ";
        cin >> num[i];
    }
    
    // sorting them
    sort(num, 10);
    
    // calculating frequency
    int uniqueCount = 0;
    for(int i = 0; i < 10; i++){
        bool alreadyInArr = false;

        // firt of all checking that if its already present in num with calculated frequency array
        for(int k = 0; k < uniqueCount; k++){
            if(numWithCalFreq[k] == num[i]){
                alreadyInArr = true;
                break;
            }
        }

        if(!alreadyInArr){
            int temp = num[i];
            int freqCount = 1; 

            for(int j = 0; j < 10; j++){
                if(i == j) continue;

                if(temp == num[j]) freqCount++; 
            }

            numWithCalFreq[uniqueCount] = temp;
            freq[uniqueCount] = freqCount;
            uniqueCount++;
        }
    }

    // now displaying
    cout << endl;
    cout << "Number\tFrequency" << endl;
    for(int i = 0; i < uniqueCount; i++){
        cout << numWithCalFreq[i] << "\t" << freq[i] << endl;
    }    
}