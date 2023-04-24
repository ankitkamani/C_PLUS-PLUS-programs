/*3-WAP TO PRINT GLOBLE AND LOCAL VARIABLE USING SCOPE OPERATORS*/


#include<iostream>
using namespace std;

int a=10;
int main()
{
    int a = 20;
    cout<<"local value :-"<<a<<endl;
    cout<<"global value :-"<<::a;
return 0;
}