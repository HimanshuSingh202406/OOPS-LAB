// A program to show multiple inheritence..

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
class B //Base Class 2
{
   public:
   int b = 10;
   B() {
      cout << "Constructor of class B" << endl;
   }
};
class C: public A, public B //Multiple Inheritence Concept
{
   public:
   int c = 30;
   C() {
      cout<<"\nClass C inherits from class A and class B both." << endl;
   }
};
int main() {
   C obj;
   cout<<"\na = "<< obj.a <<endl;
   cout<<"b = "<< obj.b <<endl;
   cout<<"c = "<< obj.c <<endl;
   return 0;
}
