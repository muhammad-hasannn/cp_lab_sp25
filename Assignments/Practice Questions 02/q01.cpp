#include<iostream>
#include<string>
using namespace std;

int main(){
    string email;
    cout << "Enter your email address (fistname.lastname@abc.com): ";
    getline(cin, email);

    size_t p1 = email.find('.');
    size_t p2 = email.find('@', p1 + 1);

    cout << endl;
    cout << "First Name: " << email.substr(0, p1) << endl;
    cout << "Last Name: " << email.substr(p1 + 1, (p2 - p1) - 1) << endl;
    cout << "Host Name: " << email.substr(p2+1) << endl;
}