/*write a program to create an abstract class named Shape that contains an empty method named number of sides()
.Provided three class named Trapeziod , Triangle , and Hexagon such that each of the classes inherit the class
shape Each of the class contain the only method number of sides() that shows the number of sides in the given
geometrical figures.*/


#include <iostream>
using namespace std;
class Shape
{
protected:
    int num_sides = 0;

public:
    Shape(int sides) : num_sides(sides)
    {
        
    }
    
    virtual int numOfSides() = 0;
};

class Trapezoid : public Shape
{
public:
    Trapezoid() : Shape(4)
    {
    }
    int numOfSides()
    {
        return this->num_sides;
    }
};

class Triangle : public Shape
{
public:
    Triangle() : Shape(3)
    {
    }
    int numOfSides()
    {
        return this->num_sides;
    }
};

class Hexagon : public Shape
{
public:
    Hexagon() : Shape(6)
    {
    }
    int numOfSides()
    {
        return this->num_sides;
    }
};

int main()
{
    cout << "I am Himanshu. My roll no. is 202406. " << endl;
    Triangle t1;
    Trapezoid tp1;
    Hexagon h1;
    Shape *s1 = &t1;
    Shape *s2 = &tp1;
    Shape *s3 = &h1;
    cout << "Triangle: " << t1.numOfSides() << endl;
    cout << "Trapezoid: " << tp1.numOfSides() << endl;
    cout << "Hexagon: " << h1.numOfSides() << endl;
    cout << "Shape1: " << s1->numOfSides() << endl;
    cout << "Shape2: " << s2->numOfSides() << endl;
    cout << "Shape3: " << s3->numOfSides() << endl;
    return 0;
}
