/*2-WAP TO PERFORM ADDITION OF FOUR VALUE USING THIS KEYWORD*/

#include<iostream>
using namespace std;

class ankit {

    private:
        int num1,num2,num3,num4;
       
    public:
   
    void display( int num1,int num2,int num3,int num4){

        this->num1=num1;
        this->num2=num2;
        this->num3=num3;
        this->num4=num4;
        
       int sum = num1+num2+num3+num4;
        cout<<sum;
    }
};

int main()
{
    ankit a;
    a.display(10,40,30,20);

}