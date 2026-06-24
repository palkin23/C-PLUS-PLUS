#include<iostream>
using namespace std;
struct array{
    int avg_marks;
    int highest_marks;
    int lowest_marks;
};
int main(){
    struct array a[2];
    a[0].avg_marks=80;
    a[0].higest_marks=100;
    a[0].lowest_marks=60;
    a[1].avg_marks=50;
    a[1].higest_marks=90;
    a[1].lowest_marks=10;
int avg=(a[0].avg_makrs+a[1].avg_marks)/2;

}