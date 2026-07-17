/*Write a program to store the details of five students (roll number,
 name, and marks) in a file using structures.*/
 #include<iostream>
 using namespace std;
 struct Students{
        string name;
        int roll_no;
        double marks;
    };
 int main(){
    FILE *fptr;
    fptr=fopen("structure.txt","w");
    struct Students arr[5]={{"Raj",1,98},{"Simran",2,100},
    {"Kuljeet",3,95},{"Priya",4,99},{"Ram",5,80}};
    char read[100];
  