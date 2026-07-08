/* Create a structure Employee and sort employees based on
 salary using structure array. */
 #include<iostream>
 using namespace std;
 struct Employee{
    string name;
    double salary;

 };
 int main(){
    Employee emp[3]={
        {"Raj",1000},
        {"Simran",2000},
        {"Mohan",999}
    };
    

    return 0;
 }