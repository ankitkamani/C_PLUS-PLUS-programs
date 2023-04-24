/*1-WAP TO FIND CUBE OF GIVEN NUMBER USING INLINE FUNCTION*/

#include<iostream>
using namespace std;
inline int sum(){

int n,cube;
cout<<"enter number";
cin>>n;

cube=n*n*n;

cout<<"CUBE of number is = "<<cube;
return 0;
};
int main(){

    sum();
    return 0;
    
}