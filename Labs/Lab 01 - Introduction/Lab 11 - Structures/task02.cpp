/*Libarary Managment System
You are tasked with developing a software system to manage a library of books. The system should store information about each book and its author, allow users to search for books by title or author name, There should be at least 15 user input and display the result

Define a structure named Book with the following members: Book Structure
   •	title (string): The title of the book.
   •	author (string ): The author of the book.
   •	publicationYear (int): The year the book was published.*/


#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct bookDetails{
    string title, author;
    int pubYear = 0;
};

/*1. to add books*/
void addBook(bookDetails bd[], int size, int count){
    cout << "Enter title: ";
    getline(cin, bd[count].title);
    cout << "Enter the name of author: ";
    getline(cin, bd[count].author);
    cout << "Enter the year of publication: ";
    cin >> bd[count].pubYear;
    cin.ignore();
}

/*2. to search by title*/
void searchByTitle(bookDetails bd[], int size, int count){
    string targetTitle;
    bool found = false;
    cout << "Enter title of book which you want to find: ";
    getline(cin, targetTitle);

    for(int i = 0; i < count; i++){
        if(bd[i].title == targetTitle){
            cout << endl;
            cout << "Book found! Details." << endl;
            cout << "Title          Author         Publication Year" << endl;
            for(int i = 0; i < 46; i++) cout << "-";
            cout << endl;
            cout << left;
            cout <<setw(15)<<bd[i].title<<setw(15)<<bd[i].author<<setw(16)<<bd[i].pubYear<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout <<"\nBook not found." << endl << endl;
    }
}

/*3. to search by author*/
void searchByAuthor(bookDetails bd[], int size, int count){
    string targetAuthor;
    bool found = false;
    cout << "Enter title of book which you want to find: ";
    getline(cin, targetAuthor);

    for(int i = 0; i < count; i++){
        if(bd[i].author == targetAuthor){
            cout << endl;
            cout << "Book found! Details." << endl;
            cout << "Title          Author         Publication Year" << endl;
            for(int i = 0; i < 46; i++) cout << "-";
            cout << endl;
            cout << left;
            cout <<setw(15)<<bd[i].title<<setw(15)<<bd[i].author<<setw(16)<<bd[i].pubYear<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout <<"\nBook not found." << endl << endl;
    }
}

/*4. to view sorted books*/
void viewSortedbooks(bookDetails bd[], int size, int count){
    
    for(int i = 0; i < count; i++){
        for(int j = 0; j < (count-1-i); j++){
            
            // int(bd[j].title.substr(0,1)) > int(bd[j+1].title.substr(0,1)) -> this will consider character as string
            if(int(bd[j].title[0]) > int(bd[j+1].title[0])){
                
                string Title = bd[j].title;
                bd[j].title = bd[j+1].title;
                bd[j+1].title = Title;

                string Author = bd[j].author;
                bd[j].author = bd[j+1].author;
                bd[j+1].author = Author;

                int tempYear = bd[j].pubYear;
                bd[j].pubYear = bd[j+1].pubYear;
                bd[j+1].pubYear = tempYear;
            }
        }
    }

    cout << "Details of all books." << endl;
    cout << "S.No.   Title          Author         Publication Year" << endl;
    for(int i = 0; i < 54; i++) cout << "-";
    cout << endl;
    cout << left;

    for(int i = 0, sNo = 1; i < count; i++, sNo++){
        cout <<setw(8)<<sNo<<setw(15)<<bd[i].title<<setw(15)<<bd[i].author<<setw(16)<<bd[i].pubYear<<endl;
    }
}

/*5. to display all books*/
void displayAllBooks(bookDetails bd[], int size, int count){
    cout << "Details of all books." << endl;
    cout << "S.No.   Title          Author         Publication Year" << endl;
    for(int i = 0; i < 54; i++) cout << "-";
    cout << endl;
    cout << left;

    for(int i = 0, sNo = 1; i < count; i++, sNo++){
        cout <<setw(8)<<sNo<<setw(15)<<bd[i].title<<setw(15)<<bd[i].author<<setw(16)<<bd[i].pubYear<<endl;
    }

}

int main(){
    bookDetails bd[15];
    int bookCount = 0;
    bool firstBookAdded = false;
    int choice = 0;
    cout << "***Library Management System***" << endl;
    do{
        cout << endl;
        cout << "\t---MENU---" << endl;
        cout << "1. Add a new book." << endl;
        cout << "2. Search book by title." << endl;
        cout << "3. Search book by author." << endl;
        cout << "4. Sort books by title." << endl;
        cout << "5. Display all books." << endl;
        cout << "6. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
        cin.ignore();

        if(choice == 1){
            if(bookCount >= 15){
                cout << "\nLibrary filled!" << endl;
            }
            else{
                cout << endl;
                addBook(bd, 15, bookCount);
                bookCount++;
                firstBookAdded = true;
            }
        }

        else if(choice == 2){
            if(!firstBookAdded){
                cout << "\nPlease add book first!" << endl;
            }
            else{
                cout << endl;
                searchByTitle(bd, 15, bookCount);
            }
        }

        else if(choice == 3){
            if(!firstBookAdded){
                cout << "\nPlease add book first!" << endl;
            }
            else{
                cout << endl;
                searchByAuthor(bd, 15, bookCount);
            }
        }

        else if(choice == 4){
            if(!firstBookAdded){
                cout << "\nPlease add book first!" << endl;
            }
            else{
                cout << endl;
                viewSortedbooks(bd, 15, bookCount);
            }
        }

        else if(choice == 5){
            if(!firstBookAdded){
                cout << "\nPlease add book first!" << endl;
            }
            else{
                cout << endl;
                displayAllBooks(bd, 15, bookCount);
            }
        }

        else if(choice == 6){
            cout << "\nClosing program..." << endl;
        }

        else{
            cout << "\nInvalid choice!" << endl;
        }
    }while(choice != 6);
}   