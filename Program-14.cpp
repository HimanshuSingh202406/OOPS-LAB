// A program to show hybrid inheritence in c++

#include <iostream>
using namespace std;

class A //Base Class 1
{
   public:
   int a = 15;
   A() {
      cout << "Constructor of class A" << endl;
   }
};
class B : public A
{
   public:
   int b = 10;
   B() {
      cout << "Constructor of class B" << endl;
   }
};
class C
{
   public:
   int c = 30;
   C() {
      cout<<"\nConstructor of class C." << endl;
   }
};

class D: public B, public C
{
    public:
    int d=30;
    D()
    {
        cout<<"Constructor of class D"<<endl;
    }
};

int main() {
   D obj;
   cout<<"\na = "<< obj.a <<endl;
   cout<<"b = "<< obj.b <<endl;
   cout<<"c = "<< obj.c <<endl;
   cout<< "d= "<<obj.d<<endl;
   return 0;
}
