/*3-WAP TO ACCESS PRIVATE MEMBER FUNCTION USING PUBLIC MEMBER FUNCTION*/

#include<iostream>
using namespace std;

class ankit {

    private:
        int num1,num2;
         void getdata(){

         cout<<"enter number :- ";
         cin>>num1;
         cout<<"enter number :- ";
         cin>>num2;
       
    }
    public:

   
    void display(){
        getdata();
        if (num1>num2)
        {
            cout<<num1<<" is meximum"<<endl;
        }else{
            cout<<num2<<" is meximum"<<endl;
        }
        
    }
};

int main()
{
    ankit a;
    a.display();
}