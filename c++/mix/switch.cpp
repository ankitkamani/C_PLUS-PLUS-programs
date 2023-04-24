#include<iostream>
using namespace std;

int main(){

    int num; 
    cout<<"enter your 1 to 7 :-";
    cin>>num;

    switch (num)
    {
    case 1:
        cout<<"today is sunday";
        break;
    
    case 2:
        cout<<"today is monday";
        break;
    
    
    case 3:
        cout<<"today is tuesday";
        break;
    
    
    case 4:
        cout<<"today is wednusday";
        break;
    
    
    case 5:
        cout<<"today is thursday";
        break;
    
    
    case 6:
        cout<<"today is friday";
        break;
    
    case 7:
        cout<<"today is saturday";
        break;
    
    default:
        cout<<"enter valid numbers...";
        break;
    }

}