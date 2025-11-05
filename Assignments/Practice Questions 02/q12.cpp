#include<iostream>
using namespace std;

struct car{
    string brandName;
    float priceNew = 0.00, odometer = 0.00;
    
    double updateMilage(double traveledDistance){
        return odometer += traveledDistance;
    }
    
    float getPriceAfterUse(){
        return priceNew*(1-(odometer/600000));
    }

    void outputDetails(){
        cout << "Brand name: " << brandName << endl;
        cout << "Price new: " << priceNew << endl;
        cout << "Price used: " << getPriceAfterUse() << endl;
    }

};

int main(){
    car c;
    double travelledDist = 0.00;
    
    cout << "Enter brand name: ";
    getline(cin, c.brandName);
    cout << "Enter original price: ";
    cin >> c.priceNew;
    cout << "Enter reading of odometer: ";
    cin >> c.odometer;
    
    cout << "\nEnter travelled disatance: ";
    cin >> travelledDist;
    c.updateMilage(travelledDist);
    
    cout << "\nPrice after use is: " << c.getPriceAfterUse() << endl;
    
    cout << endl;
    c.outputDetails();
}