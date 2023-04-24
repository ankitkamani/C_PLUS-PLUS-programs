/*4-WAP PROGRAM TO ACCESS THE FUNCTION OF CLASS OUTSIDE THE CLASS USING SCOPE OPERATOR*/

#include<iostream>
using namespace std;

class ankit {

    private:
        int empno,emp_salary;
        char name[50];
       
    public:
        void getdata();
        void display();

};

   void ankit::getdata(){

         cout<<"enter number :- ";
         cin>>empno;
         cout<<"enter name :- ";
         cin>>name;
         cout<<"enter salary :- ";
         cin>>emp_salary;

    }
    void ankit::display(){

        cout<<"emp no :- "<<empno<<endl;
        cout<<"emp name :- "<<name<<endl;
        cout<<"emp salary :- "<<emp_salary<<endl;
        
    }

int main()
{
    ankit a;
    a.getdata();
    a.display();


}