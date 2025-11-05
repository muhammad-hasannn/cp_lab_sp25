#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

struct eventDetails{
    string name, date;
    int ticketSold = 0;
};

// array is implicitly passed by reference, so no need to make returning function

/*1. Selection sort*/
void selection(eventDetails a[], int n, int whatToSort, int order){

    for(int i = 0; i < n-1; i++){
        
        // on the basis of name
        if(whatToSort == 1){
            // ascending
            if(order == 1){
                int smallIndex = i;
                for(int j = i+1; j < n; j++){
                    if(a[smallIndex].name > a[j].name){
                        smallIndex = j;
                    }
                }
                swap(a[i].name, a[smallIndex].name);
                swap(a[i].date, a[smallIndex].date);
                swap(a[i].ticketSold, a[smallIndex].ticketSold);
            }
            //descending
            else{
                int largIndex = i;
                for(int j = i+1; j < n; j++){
                    if(a[largIndex].name < a[j].name){
                        largIndex = j;
                    }
                }
                swap(a[i].name, a[largIndex].name);
                swap(a[i].date, a[largIndex].date);
                swap(a[i].ticketSold, a[largIndex].ticketSold);
            }
        }

        // on the basis of date
        else if(whatToSort == 2){
            // ascending
            if(order == 1){
                int smallIndex = i;
                for(int j = i+1; j < n; j++){
                    if(a[smallIndex].date > a[j].date){
                        smallIndex = j;
                    }
                }
                swap(a[i].name, a[smallIndex].name);
                swap(a[i].date, a[smallIndex].date);
                swap(a[i].ticketSold, a[smallIndex].ticketSold);
            }
            //descending
            else{
                int largIndex = i;
                for(int j = i+1; j < n; j++){
                    if(a[largIndex].date < a[j].date){
                        largIndex = j;
                    }
                }
                swap(a[i].name, a[largIndex].name);
                swap(a[i].date, a[largIndex].date);
                swap(a[i].ticketSold, a[largIndex].ticketSold);
            }
        }
        
        // on the basis of tickets sold
        else{
            // ascending
            if(order == 1){
                int smallIndex = i;
                for(int j = i+1; j < n; j++){
                    if(a[smallIndex].ticketSold > a[j].ticketSold){
                        smallIndex = j;
                    }
                }
                swap(a[i].name, a[smallIndex].name);
                swap(a[i].date, a[smallIndex].date);
                swap(a[i].ticketSold, a[smallIndex].ticketSold);
            }
            //descending
            else{
                int largIndex = i;
                for(int j = i+1; j < n; j++){
                    if(a[largIndex].ticketSold < a[j].ticketSold){
                        largIndex = j;
                    }
                }
                swap(a[i].name, a[largIndex].name);
                swap(a[i].date, a[largIndex].date);
                swap(a[i].ticketSold, a[largIndex].ticketSold);
            }

        }
    }
}

/*2. Bubble sort*/
void bubble(eventDetails a[], int n, int whatToSort, int order){

    for(int i = 0; i < n-1; i++){
        
        // name
        if(whatToSort == 1){
            // ascending
            if(order == 1){
                for(int j = 0; j < n-i-1; j++){
                    if(a[j].name > a[j+1].name){
                        swap(a[j].name, a[j+1].name);
                        swap(a[j].date, a[j+1].date);
                        swap(a[j].ticketSold, a[j+1].ticketSold);  
                    }
                }
            }
    
            //descending
            else{
                for(int j = 0; j < n-i-1; j++){
                    if(a[j].name < a[j+1].name){
                        swap(a[j].name, a[j+1].name);
                        swap(a[j].date, a[j+1].date);
                        swap(a[j].ticketSold, a[j+1].ticketSold);  
                    }
                }
            }
        }

        // date
        else if(whatToSort == 2){
            // ascending
            if(order == 1){
                for(int j = 0; j < n-i-1; j++){
                    if(a[j].date > a[j+1].date){
                        swap(a[j].name, a[j+1].name);
                        swap(a[j].date, a[j+1].date);
                        swap(a[j].ticketSold, a[j+1].ticketSold);  
                    }
                }
            }
    
            //descending
            else{
                for(int j = 0; j < n-i-1; j++){
                    if(a[j].date < a[j+1].date){
                        swap(a[j].name, a[j+1].name);
                        swap(a[j].date, a[j+1].date);
                        swap(a[j].ticketSold, a[j+1].ticketSold);  
                    }
                }
            }

        }

        // ticket
        else{
            // ascending
            if(order == 1){
                for(int j = 0; j < n-i-1; j++){
                    if(a[j].ticketSold > a[j+1].ticketSold){
                        swap(a[j].name, a[j+1].name);
                        swap(a[j].date, a[j+1].date);
                        swap(a[j].ticketSold, a[j+1].ticketSold);  
                    }
                }
            }
    
            //descending
            else{
                for(int j = 0; j < n-i-1; j++){
                    if(a[j].ticketSold < a[j+1].ticketSold){
                        swap(a[j].name, a[j+1].name);
                        swap(a[j].date, a[j+1].date);
                        swap(a[j].ticketSold, a[j+1].ticketSold);  
                    }
                }
            }

        }
        
    }
}

/*3. Insertion sort*/
void insertion(eventDetails a[], int n, int whatToSort, int order){

    for(int i = 1; i < n; i++){

        // name
        if(whatToSort == 1){
            string currName = a[i].name;
            string currDate = a[i].date;
            int currTicket = a[i].ticketSold;
            int pre = i-1;
    
            // ascending
            if(order == 1){
                while(pre >= 0 && a[pre].name > currName){
                    a[pre + 1] = a[pre];
                    pre--;
                }
                a[pre+1].name = currName;
                a[pre+1].date = currDate;
                a[pre+1].ticketSold = currTicket;
            }

            // descending
            else{
                while(pre >= 0 && a[pre].name < currName){
                    a[pre + 1] = a[pre];
                    pre--;
                }
                a[pre+1].name = currName;
                a[pre+1].date = currDate;
                a[pre+1].ticketSold = currTicket;
            }
        }

        //date
        else if(whatToSort == 2){
            string currName = a[i].name;
            string currDate = a[i].date;
            int currTicket = a[i].ticketSold;
            int pre = i-1;
    
            // ascending
            if(order == 1){
                while(pre >= 0 && a[pre].date > currDate){
                    a[pre + 1] = a[pre];
                    pre--;
                }
                a[pre+1].name = currName;
                a[pre+1].date = currDate;
                a[pre+1].ticketSold = currTicket;
            }

            // descending
            else{
                while(pre >= 0 && a[pre].date < currDate){
                    a[pre + 1] = a[pre];
                    pre--;
                }
                a[pre+1].name = currName;
                a[pre+1].date = currDate;
                a[pre+1].ticketSold = currTicket;
            }

        }

        //ticket
        else{
            string currName = a[i].name;
            string currDate = a[i].date;
            int currTicket = a[i].ticketSold;
            int pre = i-1;
    
            // ascending
            if(order == 1){
                while(pre >= 0 && a[pre].ticketSold > currTicket){
                    a[pre + 1] = a[pre];
                    pre--;
                }
                a[pre+1].name = currName;
                a[pre+1].date = currDate;
                a[pre+1].ticketSold = currTicket;
            }

            // descending
            else{
                while(pre >= 0 && a[pre].ticketSold < currTicket){
                    a[pre + 1] = a[pre];
                    pre--;
                }
                a[pre+1].name = currName;
                a[pre+1].date = currDate;
                a[pre+1].ticketSold = currTicket;
            }
        }
    }
}

int main(){
    eventDetails e[5];
    int sortOrder = 0, sortAlgo = 0, whatToSort = 0;

    // getting details
    for(int i = 0; i < 5; i++){
        cout << "\nEvent no. "<<i+1<<":" << endl;
        cout << "Enter event name: ";
        getline(cin, e[i].name);
        cout << "Enter event date: ";
        getline(cin, e[i].date);
        cout << "Enter total no of tickets sold: ";
        cin >> e[i].ticketSold;
        cin.ignore();
    }

    cout << "\nChoose sorting algorithm:" << endl;
    cout << "1. Selection" << endl;
    cout << "2. Bubble" << endl;;
    cout << "3. Insertion" << endl;
    cout << "Enter choice: ";
    cin >> sortAlgo;

    cout << "\nSort by: "<< endl;
    cout << "1. Event name" << endl;
    cout << "2. Date" << endl;
    cout << "3. Tickets sold" << endl;
    cout << "Enter choice: ";
    cin >> whatToSort;

    cout << "\nSort order:" << endl;
    cout << "1. Ascending" << endl;
    cout << "2. Descending" << endl;
    cout << "Enter choice: ";
    cin >> sortOrder;

    if(sortAlgo == 1){
        selection(e, 5, whatToSort, sortOrder);
    }
    else if(sortAlgo == 2){
        bubble(e, 5, whatToSort, sortOrder);
    }
    else{
        insertion(e, 5, whatToSort, sortOrder);
    }

    cout << "\n\n***Sorted Events***" << endl;
    cout << left;
    cout << setw(15) << "Event Name" << setw(10) << "Date" << setw(15) << "Tickets Sold" << endl;
    for(int i = 0; i < 5; i++){
        cout << setw(15) << e[i].name << setw(10) << e[i].date << setw(15) << e[i].ticketSold << endl;
    }
    cout << endl;
}