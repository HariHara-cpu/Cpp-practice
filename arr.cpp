/*#include<iostream>
int main()
{
    int a[5],b[5],c[5];
    for(int i=0;i<5;i++)
    {
        std::cin>>a[i];
    }
    for(int i=0;i<5;i++)
    {
        std::cin>>b[i];
    }
    for(int i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
        std::cout<<c[i]<<" ";
    }
    return 0;
}*/

/*#include<iostream>
int main()
{
    int s,t;
    std::cin>>s>>t;
    int a[s];
    for(int i=0;i<s;i++)
    {
        std::cin>>a[i];
    }
    for(int i=0;i<s;i++)
    {
        for(int j=i+1;j<s;j++)
        {
              if(a[i]+a[j]==t)
              {
                std::cout<<i<<" "<<j;
                break;
              }
        }
    }
    return 0;
}*/

#include<iostream>
int main()
{
    int s,t;
    std::cin>>s>>t;
    int a[s];
    for(int i=0;i<s;i++)
    {
        std::cin>>a[i];
    }
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            if(a[i]=a[j])
            {
                i++;
            }
            
        }
        
    }
    return 0;
}