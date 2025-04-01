/*Basic Calculator

You are creating a basic calculator program for students to practice arithmetic operations. The calculator should allow users to perform addition, subtraction, multiplication, division, and power on two numbers entered via user input. Each operation will be executed using separate functions*/

#include<iostream>
using namespace std;

void addition(float a, float b){
    cout << "Result: "<<a<<" + "<<b<<" = "<<(a+b)<<endl;
}
void subtraction(float a, float b){
    cout << "Result: "<<a<<" - "<<b<<" = "<<(a-b)<<endl;
}
void multiply(float a, float b){
    cout << "Result: "<<a<<" * "<<b<<" = "<<(a*b)<<endl;
}
void divide(float a, float b){
    if(b==0){
        cout << "Error: division by zero is not possible."<<endl;
    }
    else{
        cout << "Result: "<<a<<" / "<<b<<" = "<<(a/b)<<endl;
    }
}
void power(float a, float b){
    float result = 1;
    float temp = b; //b will ultimately become 0, but i have to write actual value of b in result statement
    while(b != 0){
        result = result*a;
        b--;
    }
    cout << "Result: "<<a<<" ^ "<<temp<<" = "<<result<<endl;
}

int main(){
    float num1 = 0, num2 = 0;
    char op;
    cout << "***Simple Calculator***"<<endl;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter operator (+, -, *, /, ^) ";
    cin >> op;
    if(op == '+'){
        addition(num1, num2);
    }
    else if(op == '-'){
        subtraction(num1, num2);
    }
    else if(op == '*'){
        multiply(num1, num2);
    }
    else if(op == '/'){
        divide(num1, num2);
    }
    else if(op == '^'){
        power(num1, num2);
    }
    else{
        cout << "invalid Operator!"<<endl;
    }
}