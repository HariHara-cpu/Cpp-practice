#include<iostream>
#include"operations.h"
int main()
{
    int num;
    std::cout<<"enter:"<<std::endl;
    std::cin>>num;
    operations fact;
    fact.n=num;
    std::cout<<"factorial:"<<fact.factorial(num);
}