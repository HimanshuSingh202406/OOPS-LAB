//Program to make the use of inline functions.
#include <iostream>
using namespace std;

inline int add(int a, int b)
{
    return a+b;
}

int main()
{
    int x, y, res;
    cout << "Enter the numbers: ";
    cin >> x >> y;
    res = add(x,y);
    cout << "Summation of two numbers is " << res;
}
