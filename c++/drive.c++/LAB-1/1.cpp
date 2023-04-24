/*1-WAP TO PERFORM SETTER AND GETTER METHOD*/

#include<iostream>
using namespace std;

class ankit {

    private:
        int num1,num2;
       
    public:
    void getdata(){

         cout<<"enter number :- ";
         cin>>num1;

    }
    void display(){

        cout<<"num is :- "<<num1;
        
    }
};

int main()
{
    ankit a;
    a.getdata();
    a.display();

}