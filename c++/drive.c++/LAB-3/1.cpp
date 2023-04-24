/*1-WAP TO USE FRIEND FUNCTION */

#include<iostream>
using namespace std;

class prince{

private:
int a=10,b=5;
public:
void foo(){
    cout<<a+b<<endl;
}
friend void ankit(prince p);

};
void ankit(prince p){

p.foo();

};

int main(){

    prince p;
    p.foo();
    ankit(p);
    
}