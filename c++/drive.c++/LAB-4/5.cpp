/*5-WAP TO PERFORM COPY CONSTRUCT*/

#include <iostream>
using namespace std;

class Sample
{
    int id;

public:
    void ankit(int x)
    {
        id = x;
    }
    void display()
    {
        cout<<endl<< "ID = " << id;
    }
};

int main()
{
    Sample obj1;
    obj1.ankit(10);
    obj1.display();

    Sample obj2(obj1);
    obj2.display();
    return 0;
}