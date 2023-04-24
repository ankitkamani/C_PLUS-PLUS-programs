/*1-WAP TO CALCULATE AREA  USING LENGTH,BREADTH,HEIGHT, IN CLASS AND OBJECT*/

#include <iostream>
using namespace std;

class ankit
{

private:
    int l, b, h;

public:
    void getdata(){

         cout<<"enter value of LENGTH :- ";
         cin>>l;
         cout<<"enter value of BREADTH :- ";
         cin>>b;
         cout<<"enter value of HEIGHT :- ";
         cin>>h;

    }
    void display(){

        cout<<"area of rectangle is :- "<<l*b*h;

    }
};

int main()
{
    ankit a;
    a.getdata();
    a.display();


}