/*2-WAP TO USE DESTRUCTOR WITH CONSTRUCT*/

#include<iostream>
using namespace std;

class ankit{
private:
int a,b;

public:
    ankit(){
        cout<<"Enter first value :-";
        cin>>a;
        
        cout<<"Enter second value :-";
        cin>>b;

        cout<<"sum of 2 value is :- "<<a+b;
    }
    ~ankit(){
        
    }

};

int main(){

    ankit a;

}