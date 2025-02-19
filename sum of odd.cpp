#include<iostream>
int main()
{
    int a=1,sum=0;
    for(int i=0;i<=15;i++)
    {
        if(i%2!=0)
        sum=sum+i;
        //a++;
    }
    std::cout<<"sum="<<sum;
}