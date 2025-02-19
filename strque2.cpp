#include<iostream>
#include<string>
int main()
{
    std::string str,strr;
    std::cout<<"enter:";
    std::cin>>str;
    int row;
    row=str.length();
    for(int i = row - 1; i >= 0; i--) 
    {
        strr += str.at(i);
    }
    
    
    return 0;
    
}