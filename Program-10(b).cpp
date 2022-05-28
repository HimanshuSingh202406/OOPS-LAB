/*Program to demonstrate the concept of Parameterized constructor.*/
#include <iostream>
using namespace std;

class output
{
    private:
    int x,y ;
    public: 
    output(int x1, int y1)
    {
        x=x1;
        y=y1;
    }
    int getX()
    {
        return x;
    }
    int getY()
    {
        return y;
    }
};
int main()
{
   
    output m(20, 25);
    cout<< "The value of x is : "<<m.getX()<<"\n";
    cout<< "The value of y is : "<<m.getY();
        
    return 0;
}
