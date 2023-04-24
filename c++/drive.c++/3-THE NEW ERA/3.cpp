/*3-WAP TO FIND MAXIMUM VALUE FROM TWO VALUES USING CLASS AND OBJECT*/

#include<iostream>
using namespace std;

class ankit {

    private:
        int num1,num2;
       
    public:
    void getdata(){

         cout<<"enter number :- ";
         cin>>num1;
         cout<<"enter number :- ";
         cin>>num2;
       

    }
    void display(){

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
    a.getdata();
    a.display();


}