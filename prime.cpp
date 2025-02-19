#include<iostream>
int isprime(int i)
{
    for(int j=2;j<=i/2;j++)
    {
        
        if(i%j==0)
        {
            
            return 0;
        }
        
        
    }
    return 1;

}
int main()
{
    int a,b;
    std ::cout<<"enter:";
    std::cin>>a>>b;
    for(int i=a;i<=b;i++)
    {
        if (i==1)
        continue;
        if(isprime(i))
        std::cout<<i<<std::endl;
    }
}