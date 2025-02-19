#include<iostream>
#include<string>
class Instructor{
    public:
    std::string name;
    double balance;
    void deposit(double amount)
    {
        balance+=amount;
        std::cout<<balance;
    }
    void display()
    {
        std::cout<<name;
    }

};
