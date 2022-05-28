// A program to demonstrate the concept of multilevel inheritance

#include <iostream>
using namespace std;
class base // base class
{
 	public:
 	int x;
 	void getdata()
 	{
    	cout << "Enter value of x: "; 
    	cin >> x;
 	}
};

class read : public base // derived class from base class
{
 	public:
 	int y;
 	void readdata()
 	{
 	    cout << "Enter value of y= ";
 	    cin >> y;
 	}
};

class product1 : public read   // derived from class read
{
 	private: int z;
 	
 	public:
 	void indata()
 	{
    	cout << "Enter value of z= "; 
    	cin >> z;
 	}
 	
 	void product()
 	{
 	    cout << "\nProduct= " << x * y * z;
 	}
};
int main()
{
     product1 a;      //object of derived class product1
     a.getdata();
     a.readdata();
     a.indata();
     a.product();
     return 0;
}
