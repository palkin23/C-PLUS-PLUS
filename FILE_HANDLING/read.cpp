/*Write a program to read and 
display the entire contents of student.txt line by line.*/
#include<iostream>
using namespace std;
int main(){
    FILE *fptr;
    char line[100];
fptr=fopen("student.txt","r");
if(fptr !=NULL){
while(fgets(line , 100,fptr)){
    cout<<line;
  
}
  fclose(fptr);
}
else{
    cout<<"FILE DOESN'T EXISTS."<<endl;
}

}