/*Write a class ACCOUNT that represents your bank account and then use it.The class should allow you to deposit money,
withdraw money, calculate interest, send a message if you have insufficient balance.*/
#include <iostream>
using namespace std;

class Account
{
    private:
    int balance=0;
    public: 
    int deposite_money(int add_money)
    {
        balance=balance+add_money;  
        return balance;
    }
    int withdraw_money(int with_money)
    {
        if(balance>=with_money)
        {
           balance=balance-with_money; 
           return 1;
        }
        else 
        {
            cout<<"Insufficient balance !"<<endl;
            return -1;
        }
    }    
    int interest_calc(int rate, int time)
    {
       balance=(balance*rate*time/100)+balance;
        return balance;
    }
    void display()
    {
        cout<<"Balance is: "<<balance;
    }
};

int main()
{
    Account A1;
    A1.deposite_money(300);
    int status = A1.withdraw_money(100);
    if(status==1)
    {
        A1.interest_calc(4,2);
        A1.display();
    }
    return 0;
}
