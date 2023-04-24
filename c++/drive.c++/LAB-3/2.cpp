/*2-WAP TO ACCESS PRIVATE MEMBER OF ONE CLASS IN ANOTHER CLASS USING FRIEND FUNCTIONALITY*/

#include <iostream>
using namespace std;

class prince
{

private:
    int a = 10, b = 5;

public:
    void foo()
    {
        cout << a + b << endl;
    }
    friend void ankit(prince p);
};

class a
{
public:
    void ankit(prince p)
    {
        p.foo();
    };
};

int main()
{

    prince p;
    p.foo();
    a b;
    b.ankit(p);
}