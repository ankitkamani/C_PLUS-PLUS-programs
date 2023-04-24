#include<iostream>
using namespace std;

int main(){

 int i,j,sp;

 for (i = 1; i <=5; i++)
 {
    for (sp = 5; sp >i; sp--)
    {
        cout<<"  ";
    }
    
    for (j = 1; j <=i; j++)
    {
     cout<<" *";
    }
     for (j = 1; j <=i-1; j++)
    {
     cout<<" *";
    }
    cout<<"\n";
 }

 for (i = 1; i <=2; i++)
 {
    for (j = 0; j <=8; j++)
    {
        cout<<" *";
    }
    cout<<"\n";
 }
 
  for (i = 5; i >=1; i--)
 {
    for (sp = 5; sp >i; sp--)
    {
        cout<<"  ";
    }
    
    for (j = 1; j <=i; j++)
    {
     cout<<" *";
    }
     for (j = 1; j <=i-1; j++)
    {
     cout<<" *";
    }
    cout<<"\n";
 }
 
 
 

}