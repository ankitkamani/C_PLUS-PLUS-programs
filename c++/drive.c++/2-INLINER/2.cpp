/*2-WAP TO GET THE VALUE FROM USER AND PERFORM ALL ARITHMATIC TASK USING DIFFRENT INLINE FUNCTIONS FOR EACH TASK*/

#include <iostream>
using namespace std;

inline int sum(int a, int b)
{
    int sum;
    sum = a + b;
    cout << "sum of number is = " << sum;
    return 0;
};
inline int divi(int a, int b)
{
    int sum;
    sum = a / b;
    cout << "sum of number is = " << sum;
    return 0;
};
inline int mul(int a, int b)
{
    int sum;
    sum = a * b;
    cout << "sum of number is = " << sum;
    return 0;
};
inline int sub(int a, int b)
{
    int sum;
    sum = a - b;
    cout << "sum of number is = " << sum;
    return 0;
};

int main()
{
    int a, b;
    char c;
    cout << "enter number 1 :- ";
    cin >> a;
    cout << "enter number 2 :- ";
    cin >> b;
    cout << "enter operator :- ";
    cin >> c;

    switch (c)
    {
    case '+':
        sum(a,b);
        break;
    case '-':
        sub(a,b);
        break;
    case '*':
        mul(a,b);
        break;
    case '/':
        divi(a,b);
        break;
    
    default:
        cout<<"enter valid input...";
        break;
    }

    return 0;
}