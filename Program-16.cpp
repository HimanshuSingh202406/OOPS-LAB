// Unary operator overloading..

#include <iostream>
using namespace std;

class Distance
{
    private:
    int feet, inches ;
    
    public:
    Distance()   // Default Constructor
    {
     feet = 0;
     inches = 0;
    }
    
    Distance(int f, int i)  // Parametrized Constructor 
    {
       feet = f;
       inches = i;
    }
    
    void display() //display function to display the output 
    {
        cout<<"The distance covered in feets is " << feet << " and in inches is " << inches <<endl;
    }
    
    //constructor overloading using - operator
    
    Distance operator - ()
    {
        feet = -feet;
        inches = -inches;
        return Distance(feet,inches);
    }
    
};


int main()
{
    Distance D1(10,20);
    -D1;
    D1.display();
    
    Distance D2(-38,-47);
    -D2;
    D2.display();
    
    return 0;
}
