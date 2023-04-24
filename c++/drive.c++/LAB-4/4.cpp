/*4-WAP TO PERFROM CONSTRUCT WITH PARAMETER*/

/*3-WAP TO UNDERSTAND DEFUALT CONSTRUCT*/

#include <iostream>
using namespace std;

class ankit
{
private:
    int a, b;

public:
   
    ankit(int a, int b)
    {
        cout<<"this is from perameterized constructor..."<<endl;
        cout << "sum of 2 value is :- " << a + b;
    }
};

int main()
{
    ankit a(10,15);

}