#include<iostream>
#include<string>
int area(int l,int b)
{
    return l*b;
}
int area(int s)
{
    return s*s;
}
double area(double r)
{
    return (22/7)*r*r;
}
int main()
{
    int c;
    std::cout<<"1 rec\n2 squ\n3 cir\n"<<std::endl<<"choose:";
    std::cin>>c;
    switch(c)
    {
        case 1:
        {
            int l,b;
            std::cout<<"enter:";
            std::cin>>l>>b;
            std::cout<<area(l,b);
            break;
        }
        case 2:
        {
            int s;
            std::cout<<"enter:";
            std::cin>>s;
            std::cout<<area(s);
            break;
        }
        case 3:
        {
            int r;
            std::cout<<"enter:";
            std::cin>>r;
            std::cout<<area(r);
            break;
        }
    }
}