/*Write a function power () which raise a number m to a power n. The function takes double value of m
and integer value of n and returns the result. Use a default value of n is 2 to make the function to calculate
squares when the arguments is omitted.*/

#include <iostream>
using namespace std;

double power(double m, int n=2)
{
    for(int i=1; i<n; i++){
        m*=m;
    }
    return m;
}

int main()
{
    cout << "When default argument is not used: ";
    cout << power(3.14,3);
    cout << "\n When default argument is used: ";
    cout << power(3.14);
    return 0;
}
