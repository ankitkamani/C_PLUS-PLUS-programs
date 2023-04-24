#include<iostream>
using namespace std;

class ankit{

private:
int a,b;
public:
 void sum(){
    cin>>a;
    cin>>b;
    cout<<"sum of 2 value is "<<a+b;
 }

};

int main(){

    ankit a;

    a.sum();

}