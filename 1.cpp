// #include<iostream>
// #include<string>
// int main()
// {
//     /*simple printing
//     std::cout<<"hello world\n"<<std::endl;
//     std::string s="naruto";
//     std::cout<<"hi "<<s<<std::endl;*/

//     /*simple operation
//     int a,b;
//     std::cout<<"enter:";
//     std::cin>>a>>b;
//     std::cout<<"sum="<<a+b;*/

//     /*simple if else
//     int a,b;
//     std::cout<<"enter:";
//     std::cin>>a>>b;
//     if(a>b)
//     std::cout<<"a is bigger";
//     else if(b>a)
//     std::cout<<"b is bigger";
//     else
//     std::cout<<"both are same";*/

//     /*simple for loop
//     int a;
//     std::cout<<"enter:";
//     std::cin>>a;
//     for(int i=0;i<5;i++)
//     {
//         a+=a;
//         std::cout<<a<<"\n";
//     }*/

//     return 0;
// }

#include <iostream>
#include <vector>

void findCombinationsAndSum(const std::vector<int>& arr, std::vector<int>& data, int start, int end, int index, int m) {
    // If the combination is of the required size m, calculate the sum
    if (index == m) {
        int sum = 0;
        for (int j = 0; j < m; j++) {
            sum += data[j];
        }
        std::cout << "Combination: ";
        for (int j = 0; j < m; j++) {
            std::cout << data[j] << " ";
        }
        std::cout << " -> Sum: " << sum << std::endl;
        return;
    }

    // Replace index with all possible elements. The condition end-i+1 >= m-index makes sure that including one element at index will make a combination with remaining elements at remaining positions.
    for (int i = start; i <= end && end - i + 1 >= m - index; i++) {
        data[index] = arr[i];
        findCombinationsAndSum(arr, data, i + 1, end, index + 1, m);
    }
}

void printCombinationsAndSums(const std::vector<int>& arr, int n, int m) {
    // A temporary array to store all combinations one by one
    std::vector<int> data(m);

    // Print all combinations and their sums using a temporary array
    findCombinationsAndSum(arr, data, 0, n - 1, 0, m);
}

int main() {
    std::vector<int> arr = {-2,-1,0,0,1,2,3};
    int n = arr.size();
    int m = 3;

    std::cout << "All " << m << "-element subsets of the array and their sums are:\n";
    printCombinationsAndSums(arr, n, m);

    return 0;
}
