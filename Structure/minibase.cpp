/*19. Implement a mini database using structures: 
● add record 
● delete record 
● update record 
● search record*/
#include<iostream>
using namespace std;
struct Database{
    string name;
    int id;
    double marks;
};
int main(){
    int size;
    cout<<"Enter size: "<<endl;
    cin>>size;
    Database data[]={
    {"Preeti",1,100},
    {"Simran",2,99},
    {"Reet",3,99.5},
    {"Geet",4,89.5}
    };
    Database data2[size+1];
    int index;
    for(int i=0;i<index;i++){
         cout<<"Name: "<<data[i].name<<endl;
        cout<<"Id: "<<data[i].id<<endl;
        cout<<"Marks: "<<data[i].marks<<endl;
    }

    }

    //To print the array
    for(int i=0;i<size;i++){
        cout<<"Name: "<<data[i].name<<endl;
        cout<<"Id: "<<data[i].id<<endl;
        cout<<"Marks: "<<data[i].marks<<endl;
    }
    return 0;
}