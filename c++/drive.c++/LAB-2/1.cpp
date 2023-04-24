/*1-WAP TO GETDATA OF EMPLOYEE AND DISPLAY IT.*/

#include<iostream>
using namespace std;

class ankit {

    private:
        int empno,emp_salary;
        char name[50];
       
    public:
    void getdata(){

         cout<<"enter number :- ";
         cin>>empno;
         cout<<"enter name :- ";
         cin>>name;
         cout<<"enter salary :- ";
         cin>>emp_salary;

    }
    void display(){

        cout<<"emp no :- "<<empno<<endl;
        cout<<"emp name :- "<<name<<endl;
        cout<<"emp salary :- "<<emp_salary<<endl;
        
    }
};

int main()
{
    ankit a;
    a.getdata();
    a.display();


}