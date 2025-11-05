/*Customer Service
You are working on a customer service platform where agents often need to combine various pieces of
information to form a complete response to customer inquiries. To streamline this process, you will create a
feature that allows agents to input different parts of their response separately and then concatenate them into a
single, coherent message.
Develop a C++ program that allows customer service agents to input multiple parts of a response message,
concatenate these parts into a single message, and display the final message*/

#include<iostream>
#include<string>
using namespace std;

int main() {
	string part1, part2, part3, part4, finalPart;

	cout << "Enter the first part of the response: ";
	getline(cin,part1);
	cout << "Enter the second part of the response: ";
	getline(cin, part2);
	cout << "Enter the third part of the response: ";
	getline(cin, part3);
	cout << "Enter the fourth part of the response: ";
	getline(cin, part4);

	finalPart = part1 + " " + part2 + " " + part3 + " " + part4;
	cout << "\nFinal Response: " << finalPart << endl;
}
