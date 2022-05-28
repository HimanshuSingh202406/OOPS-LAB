// A program to show the concept of runtime polymorphism using virtual function

#include <iostream>
using namespace std;

// Declaration of Base class
class shape {
public:
	virtual void calculate()            //virtual function
	{
		cout << "Area: ";
	}
};

// Declaration of derived class
class Rectangle : public shape {
public:
	int width, length, area;

	void calculate()      //overrideen function from base class 
	{
		cout << "Width of Rectangle: ";
		cin >> width;

		cout << "Length of Rectangle: ";
		cin >> length;

		area = length * width;
		cout << "Area of Rectangle: " << area << " units"<<"\n";
	}
};


int main()
{

	// base class pointer
	shape* s;
	Rectangle r;

	// initilization of reference variable
	s = &r;

	// calling of Rectangle function
	s->calculate();
	
	return 0;
}
