/* Singe inheritance */
#include<iostream>
using namespace std;

class perent{

    private:
    int a,b;
    public:
    perent(){
        cin>>a;
        cin>>b;
        cout<<"sum is :-"<<a+b<<endl;
    }
};

class child : public perent{

   private:

   public:
    void a(){
        cout<<"this is child class";
    }

};

int main(){

    child ch;
    ch.a();
    
    return 0;
}