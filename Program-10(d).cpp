/*Program to demonstrate the concept of constructor overloading.*/
#include <iostream>
using namespace std;

class Area
{
    public:
    double area;
    
    Area()
    {
        area = 0;
    }
    Area(int radius)
    {
        area = 3.14*(radius*radius);
    }
    
    void display()
    {
    cout<<"The area of the circle is : "<< area <<" sq. units"<<endl;
    }    
};
int main()
{
    Area a1(10);
    a1.display();
    return 0;
}
