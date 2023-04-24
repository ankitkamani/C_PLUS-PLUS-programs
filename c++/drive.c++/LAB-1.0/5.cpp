/*5-WAP TO MAKE SIMPLE CALCULATOR*/
#include <iostream>
using namespace std;

int main()
{

    float n1, n2;
    char oprater;
    cout << "enter number 1 = ";
    cin >> n1;
    cout << "enter number 2 = ";
    cin >> n2;
    cout << "enter oprater = ";
    cin >> oprater;

    switch (oprater)
    {
    case '+':
        cout << "sum of 2 value is " << n1 + n2;
        break;

    case '-':
        cout << "substraction of 2 value is " << n1 - n2;
        break;

    case '*':
        cout << "multipication of 2 value is " << n1 * n2;
        break;

    case '/':
        cout << "division of 2 value is " << n1 / n2;
        break;

    default:
        cout << "enter valid operator...";
        break;
    }
}