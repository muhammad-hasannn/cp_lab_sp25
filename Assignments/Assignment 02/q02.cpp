/*A supermarket wants to automate its checkout process by introducing a simple billing system. The cashier should be able to view a fixed list of available products along with their prices. When a customer is ready to make a purchase, the system should allow the cashier to enter the quantity of each product, after which it should calculate the total bill and apply sales tax.
To encourage more sales, the supermarket offers a discount for purchases above 500 currency units. The system should also generate a final invoice displaying item-wise details, tax, discounts, and the final amount payable.
After completing a transaction, the cashier should be able to process another customer’s order without restarting the program. Features to Implement:
i. Display a fixed list of products with prices 
ii. Allow multiple item purchases and quantity input
iii. Calculate total bill with applicable tax and discounts 
iv. Print an invoice with complete details
v. Loop the program to handle multiple transactions*/

#include<iostream>
using namespace std;

void productList(){
    cout << "S.No. | Product Name | Price"<<endl;
    cout << " 1.     Soap           RS 100"<<endl;
    cout << " 2.     Shampo         RS 200"<<endl;
    cout << " 3.     Cream          RS 150"<<endl;
    cout << " 4.     Hair Oil       RS 300"<<endl;
    cout << " 5.     Charger        RS 500"<<endl;
}

//function to calculte bill, bcuz after showing list of products he will buy something
void claculateBill(int p1, int p2, int p3, int p4, int p5, float &actual_price, float &disc_price, float &final_price){
    //actual, discount & final prices are transferd by reference, bcuz the will do some changes with them
    
    //calculating actual price
    actual_price = ((p1*100)+(p2*200)+(p3*150)+(p4*300)+(p5*500));
    // giving discount
    if(actual_price > 500){
        cout << "Your bill is: "<<actual_price<<endl;
        cout << "Congragualtions! you are getting a discount of 10%"<<endl;
        disc_price = actual_price*(0.9);
        cout << "Now your bill is: "<<disc_price<<endl;
    }
    else{
        disc_price = actual_price;
        cout << "Your bill is: "<<disc_price<<endl;
    }
    //adding sales tax
    cout << "You have to pay 10% sales tax on your bill."<<endl;//i'm considring 10% sales tax
    final_price = (disc_price+(disc_price*0.1));
    cout << "Your payable amount with tax is: "<<final_price<<endl;
}

// for displaying summary
void displaySummary(int p1, int p2, int p3, int p4, int p5, float actual_price, float disc_price, float final_price){
    cout << "**************SUMMARY**************"<<endl;        
    if(p1 > 0){
        cout << "Item Name: Soap     | Qty: "<<p1<<" | Unit Price: 100"<<endl;
    }
    if(p2 > 0){
        cout << "Item Name: Shampo   | Qty: "<<p2<<" | Unit Price: 200"<<endl;
    }
    if(p3 > 0){
        cout << "Item Name: Cream    | Qty: "<<p3<<" | Unit Price: 150"<<endl;
    }
    if(p4 > 0){
        cout << "Item Name: Hair Oil | Qty: "<<p4<<" | Unit Price: 300"<<endl;
    }
    if(p5 > 0){
        cout << "Item Name: Charger  | Qty: "<<p5<<" | Unit Price: 500"<<endl;
    } 
    else{
        cout << "You Purchased Zero Items."<<endl;
    }
    cout << endl;
    cout << "You have purchased total \'"<<(p1+p2+p3+p4+p5)<<"\' items."<<endl;
    cout << "Your actual bill is: "<<actual_price<<endl;
    if(actual_price>disc_price){ // showing this only if he get's discount
        cout << "Your discounted bill is: "<<disc_price<<endl;
    }
    cout << "Your payable amount after adding 10% sales tax is: "<<final_price<<endl;
    cout << endl;
}

int main(){
    cout << "-----------------------------------"<<endl;
    cout << "***WElCOME TO HASAN SUPER MARKET***"<<endl;
    bool choice; //for further bills
    do{
        cout << "-----------------------------------"<<endl;
        cout << "***********Product List************"<<endl;
        cout << "-----------------------------------"<<endl;
        productList();
        cout << "-----------------------------------"<<endl;

        int p1 = 0, p2 = 0, p3 = 0, p4 = 0, p5 = 0;
        float actual_price = 0.00, disc_price = 0.00, final_price = 0.00;
    
        cout << "Enter quantity of 1st product: ";
        cin >> p1;
        cout << "Enter quantity of 2nd product: ";
        cin >> p2;
        cout << "Enter quantity of 3rd product: ";
        cin >> p3;
        cout << "Enter quantity of 4th product: ";
        cin >> p4;
        cout << "Enter quantity of 5th product: ";
        cin >> p5;

        cout << "-----------------------------------"<<endl;
        claculateBill(p1, p2, p3, p4, p5, actual_price, disc_price, final_price);
        cout << "-----------------------------------"<<endl;
        displaySummary(p1, p2, p3, p4, p5, actual_price, disc_price, final_price);
        cout << "-----------------------------------"<<endl;

        cout << "Do you want to calculate another bill (0/1)? ";
        cin >> choice;
    }while(choice);
    cout << "Program closed..."<<endl;
}