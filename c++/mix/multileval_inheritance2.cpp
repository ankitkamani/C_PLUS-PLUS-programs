/* Multileval inheritance */

#include<iostream>
using namespace std;

class mark{

    protected:

    int a,b,c,d;

    public:

    mark(){
        cout<<"Enter the marks of PHP :- ";
        cin>>a;
        cout<<"Enter the marks of JAVA :- ";
        cin>>b;
        cout<<"Enter the marks of LARAVEL :- ";
        cin>>c;
        cout<<"Enter the marks of FLUTTER :- ";
        cin>>d;
        
    }
};

class sum : public mark{

   protected:

    int sum;

   public:
    void sum1(){

        sum = a+b+c+d;
        
        cout<<"Sum of all subject is :- "<<sum<<endl;
    }

};

class per : public sum{

   private:
    float pers;
   public:
    void per1(){
        pers = (sum*100)/400;
        cout<<"Persantage is :- "<<pers<<"%"<<endl;
    }

};

int main(){
    per ch;
    ch.sum1();
    ch.per1();    
    return 0;
}