#include<iostream>
#include<string>
int main()
{
    std::string alp={"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string key={"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};
    std::string msg,nmsg;
    std::cout<<"enter:";
    getline(std::cin,msg);
    //std::cout<<msg;
     for(char c:msg)
     {
         size_t pos=alp.find(c);
         if(pos!=std::string::npos)
         {
             //std::cout<<key.at(pos);
             char nc=key.at(pos);
             nmsg +=nc;
         }
         else
         {
             nmsg+=c;
         }
     }
     std::cout<<nmsg;
}