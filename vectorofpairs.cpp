#include<iostream>
#include<vector>
#include<utility>
int main()
{
    std::vector<std::pair<int,int>> nums={{1,2},{15,10},{5,-4}};
    int sum=0;
    for(int i=0;i<nums.size();i++)
    {
        //std::cout<<nums[i].second<<std::endl;
        sum+=nums[i].second;
        //std::cout<<sum<<std::endl;
    }
    std::cout<<sum;
}