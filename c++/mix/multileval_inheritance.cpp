/* multileval inheritance */
#include<iostream>
using namespace std;

class grandfather{

    private:
    int a,b;
    public:
    grandfather(){
        cout<<"enter first value :- ";
        cin>>a;
        cout<<"enter second value :- ";
        cin>>b;
        cout<<"sum is :-"<<a+b<<endl;
        cout<<"sum form grandfather class"<<endl;
    }
};

class father : public grandfather{

   private:

   public:
    void a(){
        cout<<"this is father class"<<endl;
    }

};

class child : public father{

   private:

   public:
    void b(){
        cout<<"this is child class"<<endl;
    }

};

int main(){
    child ch;
    ch.a();
    ch.b();    
    return 0;
}