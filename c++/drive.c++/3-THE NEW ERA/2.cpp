/*2-WAP TO GET DETAILS OF STUDENTS AND DISPLAY IT USING CLASS AND OBJECT*/

#include<iostream>
using namespace std;

class ankit {

    private:
        int rollno;
        char name[50];
    public:
    void getdata(){

         cout<<"enter roll no :- ";
         cin>>rollno;
         cout<<"enter name :- ";
         cin>>name;
       

    }
    void display(){

        cout<<"roll no is :- "<<rollno<<endl;
        cout<<"name is :- "<<name;

    }
};

int main()
{
    ankit a;
    a.getdata();
    a.display();


}