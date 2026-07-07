/*1. Define a structure Student with name, roll number, and marks. Take input and 
display the details.*/
#include <iostream>
using  namespace std;
struct student
{
    string name;
    int roll;
    double marks;
};
int main(){
    struct student s1;
    cout<<"Enter name"<<endl;
    cin>>s1.name;
    cout<<"Enter roll no"<<endl;
    cin>> s1.roll;
    cout<<"Enter marks"<<endl;
    cin>>s1.marks;
    cout<<"Name: "<<s1.name<<endl;
    cout<<"Roll No: "<<s1.roll<<endl;
    cout<<"Marks: "<<s1.marks<<endl;
  return 0;
}
