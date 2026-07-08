/*. Create a structure Rectangle with length and width. Calculate
 area and perimeter using structure variables.*/
#include<iostream>
using namespace std;
struct Rectangle{
    int length;
    int width;
};
int main(){
    struct Rectangle r1;
    r1.length=10;
    r1.width=12;
    int area=r1.length*r1.width;
    int perimeter=2*(r1.length+r1.width);
    cout<<"Area of rectangle is : "<<area<<endl;
    cout<<"Perimeter of rectangle is : "<<perimeter<<endl;
    return 0;
}