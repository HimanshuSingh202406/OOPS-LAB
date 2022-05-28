// A program to demonstrate the concept of destructor..

#include <iostream>
using namespace std;

class students
{
    public:
    students()
    {
        cout<<"Constructor"<<endl;
    }
    ~students()
    {
        cout<<"Destructor";
    }
};

int main()
{
    students m;
    return 0;
}
