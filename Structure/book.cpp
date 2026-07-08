/*3. Create a structure Book with title, author, and price. Display 
all books whose price is above 500.*/
#include<iostream>
using namespace std;
struct Book{
    string title;
    string author;
    double price;
};
int main(){
    struct Book b1={"I and Me","JK Fermadez",450.5};
    struct Book b2={"Juliet","HK Fernz",550.5};
    struct Book b3={"Romeo","VK Fernz",500.1};
    
     if(b1.price > 500){
        cout << "BOOK TITLE: " << b1.title << endl;
        cout << "AUTHOR: " << b1.author << endl;
        cout << "PRICE: " << b1.price << endl << endl;
    }

    if(b2.price > 500){
        cout << "BOOK TITLE: " << b2.title << endl;
        cout << "AUTHOR: " << b2.author << endl;
        cout << "PRICE: " << b2.price << endl << endl;
    }

    if(b3.price > 500){
        cout << "BOOK TITLE: " << b3.title << endl;
        cout << "AUTHOR: " << b3.author << endl;
        cout << "PRICE: " << b3.price << endl;
    }

    return 0;
}