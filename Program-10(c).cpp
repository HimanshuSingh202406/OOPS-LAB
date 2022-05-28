/*Program to demonstrate the concept of Copy constructor.*/
#include <iostream>
using namespace std;
class Copy
{
    private:
    int m,n ;
    public: 
    Copy(int m1, int n1) 
    {
        m=m1;
        n=n1;
    }
    Copy (const Copy &Co)
    {
        m=Co.m;
        n=Co.n;
    }
    int getM()
    {
        return m;
    }
    int getN()
    {
        return n;
    }
};
int main()
{
    Copy Co(13, 97);
    Copy Co1 = Co;
    cout<< "m: "<<Co.getM()<<endl
        << "n: "<<Co.getN()<<endl;
        
    cout<< "Co.m: "<<Co1.getM()<<endl
        << "Co.n: "<<Co1.getN();
     
     return 0;
}
