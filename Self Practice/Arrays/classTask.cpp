#include<iostream>
using namespace std;

int arry[5];
int i = 0; // cursor for array

void insert(int a[], int b){
    if(i == b){ 
        cout << "Array is full."<<endl;
    }
    else{
        cout << "Enter value to insert: ";
        cin >> arry[i];
        i++;
        cout << "Value inserted!"<<endl;
    }
}

//to delete
void shift(int a[], int b){
    if(i == 0){
        cout << "Array is empty."<<endl;
    }
    else{
        i--;
        cout << "value deleted!"<<endl;
    }
}

void update(int a[], int b){
    int index = 0, value = 0;
    do{
        cout << "Enter index value: ";
        cin >> index;
        if(index < 0 || index >= b){
            cout << "Invalid index value!"<<endl;
        }

    }while(index < 0 || index >= b);
    cout << "Enter value which you want to update at index "<<index<<": ";
    cin >> value;
    arry[index] = value;
    cout << "Value updated!"<<endl;
}

void search(int a[], int b){
    int index = 0, choice = 0;
    cout << endl;
    cout << "To see full array, press '1'"<<endl;
    cout << "To see specific elemnt, press '2'"<<endl;
    cout << "Enter choice: ";
    cin >> choice;
    cout << endl;

    if(choice == 1){
        for(int i = 0; i < b; i++){
            cout << arry[i] << " ";
        }
    }
    else if(choice == 2){
        do{
            cout << "Enter index number of element which you want to search: ";
            cin >> index;
            if(index < 0 || index >= b){
                cout << "Invalid index number."<<endl;
            }
        }while(index < 0 || index >= b);
        
        cout << "Value at index \'"<<index<<"\' is: "<<arry[index]<<endl;
    }
    else{
        cout << "Invalid choice!"<<endl;
    }
}

int main(){
    int choice = 0;
    cout << "Welcome to array!"<<endl;
    
    do{
        cout << endl;
        cout << "\t---MENU---"<<endl;
        cout << "To insert value, press '1'"<<endl;
        cout << "To delete value, press '2'"<<endl;
        cout << "To update value, press '3'"<<endl;
        cout << "To search value, press '4'"<<endl;
        cout << "To exit, press '0'"<<endl;
        cout << "Enter choice: ";
        cin >> choice;
        cout << endl;

        if(choice == 1){
            insert(arry, 5);
        }
        else if(choice == 2){
            shift(arry, 5);
        }
        else if(choice == 3){
            update(arry, 5);
        }
        else if(choice == 4){
            search(arry, 5);
        }
        else if(choice == 0){
            cout << "Closing program"<<endl;
        }
        else{
            cout << "Invalid chooice"<<endl;
        }
    }while(choice != 0);
}