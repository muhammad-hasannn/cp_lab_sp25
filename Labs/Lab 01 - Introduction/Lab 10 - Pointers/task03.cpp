/* Organizing a Shelf of Books
You're tasked with organizing a shelf of books in a library. Your task is to create a function that arranges the
books in ascending order based on their heights.you can use pointers to efficiently manage their positions.

Requirements:
    • If necessary, swap the positions of the books to arrange them in ascending order of height.
    • Implement the function to accept an array of integers representing the heights of the books, using pointers.*/

#include<iostream>
using namespace std;

void organizeBooks(float *a, int size){
    cout << "\nHeights of Books before organizing:" << endl;
    for(int i = 0; i < size; i++){
        cout <<*(a+i)<<"cm ";
    }
    cout << endl;

    //organizing
    for(int i = 0; i < size; i++){
        for(int j = 0; j < (size-i-1); j++){
            if(*(a+j) > *(a+j+1)){
                float temp = *(a+j);
                *(a+j) = *(a+j+1);
                *(a+j+1) = temp;
            }
        }
    }

    cout << "\nHeights of Books after organizing:" << endl;
    for(int i = 0; i < size; i++){
        cout <<*(a+i)<<"cm ";
    }
    cout << endl;
}

int main(){
    int noOfBooks = 0, bookCount = 0, choice = 0;
    cout << "Welcome to Book Shelf Organizer" << endl << endl;
    cout << "Enter the no. of books: ";
    cin >> noOfBooks;

    float shelf[noOfBooks];
    do{
        cout << "\n---MENU---" << endl;
        cout << "1. Add book." << endl;
        cout << "2. See organized books." << endl;
        cout << "3. Exit." << endl;
        cout << "Enter choice: ";
        cin >> choice;
        if(choice == 1){
            if(bookCount >= noOfBooks){
                cout << "\nBook shelf is full." << endl;
            }
            else{
                cout << "\nEnter height of book (cm): ";
                cin >> shelf[bookCount];
                cout << "Book added!" << endl;
                bookCount++;
            }
        }
        else if(choice == 2){
            organizeBooks(shelf, bookCount);
        }
        else if(choice == 3){
            cout << "\nClosing program." << endl;
        }
        else{
            cout << "\nInvalid choice!" << endl;
        }
    
    }while(choice != 3);
}