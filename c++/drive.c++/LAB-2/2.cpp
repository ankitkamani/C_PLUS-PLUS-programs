/*2-WAP TO ACCESS STATIC DATA MEMBER USING STATIC DATA MEMBER FUNCTION*/

#include<iostream>
using namespace std;

class ankit {

    private:
       static int num1;
       
    public:
   static void getdata(){

         cout<<"enter number :- ";
         cin>>num1;

    }
   static void display(){

        cout<<"num is :- "<<num1;
        
    }
};

int ankit::num1 = 0;
int main()
{
    ankit a;
    a.getdata();
    a.display();
return 0;
}