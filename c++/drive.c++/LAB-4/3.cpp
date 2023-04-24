/*3-WAP TO UNDERSTAND DEFUALT CONSTRUCT*/

#include <iostream>
using namespace std;

class ankit
{
private:
    int a, b;

public:
    ankit()
    {
        cout << "this is default constructor..."<<endl;
    }
    ankit(int a, int b)
    {
        cout<<"this is from perameterized constructor..."<<endl;
        cout << "sum of 2 value is :- " << a + b;
    }
};

int main()
{
    ankit a;
    ankit b(10,15);

}