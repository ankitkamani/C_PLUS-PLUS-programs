/*operator overloading...*/

#include<iostream>
using namespace std;

class demo{
private:
    int a=10,b=20;
public:
    void demo1(){

        cout<<"with operator :- "<<a;
        cout<<"with operator :- "<<b;
    }
    void operator -(){

        a = -a;
        b = -b;

    }
    void display(){

        cout<<"with operator :- "<<a;
        cout<<"with operator :- "<<b;
        
    }
    


};
int main(){

demo d;
d.demo1();
-d;
d.display();
return 0;

}