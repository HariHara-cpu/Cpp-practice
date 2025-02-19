/*
#include<iostream>
#include<vector>
int main()
{
    std::vector<bool> a(10,0);
    for(int i=0;i<a.size();i++)
    std::cout<<a[i];
}
*/
/*using itterator
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,5,6};
    vector<int>:: iterator it;
    for(it=v.begin();it!=v.end();it++)
    cout<<*it<<" ";
}
*/
// erase
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     vector<int> a={1,2,3,4,5,6,7,8,9,10};
//     vector<int>::iterator it;
//     for(int i=1;i<a.size();i++)
//     {
//         a.erase(a.begin()+i);
//     }
//     for(it=a.begin();it!=a.end();it++)
//     {
//         cout<<*it<<" ";
//     }

// 

#include<iostream>
#include<vector>
#include<algorithm>
int main()
{
    std::vector<int> vec={10,2,-1,4,79,60};
    std::sort(vec.begin(),vec.end());
    std::vector<int>::iterator it;
    for(it=vec.begin();it!=vec.end();it++)
    {
        std::cout<<*it<<" ";
    }
}