/*Write a program that writes the English alphabets A to Z into a file
 using fputc(), then reads them back using fgetc().*/
 #include<iostream>
 using namespace std;
 int main(){
    FILE *fptr;
    fptr=fopen("new.txt","w");
    fclose(fptr);
    fptr=fopen("new.txt","a");
    char ch;
    for(ch='A';ch<='Z';ch++){
        fputc(ch,fptr);
    }
    fclose(fptr);
    fptr=fopen("new.txt","r");
    while((ch=fgetc(fptr))!=EOF){
        cout<<ch<<" ";
    }
    fclose(fptr);
    return 0;
 }