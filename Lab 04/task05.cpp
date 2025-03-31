/* Academic Excellence Awards Ceremony  

At an Academic Excellence Awards Ceremony, the organizers want to recognize students' achievements in mathematics by calculating the factorial of their scores. 
The factorial value will be used to determine the complexity level of problems they solved.*/

#include<iostream>
using namespace std;
int main(){
    int total_stu = 0;
    cout << "Enter no. of students: ";
    cin >> total_stu;
    cout << endl;
    int count = 1;
    while(count <= total_stu){
        int marks = 0, fact = 1;
        cout << "Enter  marks of student no. "<<count<<": ";
        cin >> marks;
        for(int i = 1; i <= marks; i++){
            fact = fact*i;
        }
        cout << "Factorial of marks is: "<<fact<<endl;
        cout << endl;
        count++;
    }
}