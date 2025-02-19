#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str,str1,str2;
    str=("hi");
    str2=string(10,'a');
    str1=("hello");
    string str3 {str1,3};
    string str4 {"hello world",3};
    string str5;
    cout<<"enter:";
    getline(cin,str5);
    cout<<str5;
    cout<<str<<endl<<str1<<endl<<str+str1<<endl<<str2<<endl<<str3<<endl<<str4<<endl<<str5[3]<<str5.at(3);
}
