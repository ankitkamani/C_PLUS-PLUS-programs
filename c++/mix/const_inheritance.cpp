#include<iostream>
using namespace std;


class a{
public:
    a(){
        cout<<"this is from a const"<<endl;
    }
    a(int y){
        cout<<"this is from a const"<<y<<endl;
    }

};

class b:public a{
public:
    b(int x):{
        cout<<"this is from b const"<<x<<endl;
    }

};

int main(){

    b bb(10);


}