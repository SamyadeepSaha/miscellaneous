// cpp standard 20
// g++ -std=c++20 heap.cpp -o prog

#include<iostream>
#include<vector>
#include<algorithm>

void printVector(const std::vector<int>& v)
{
    for(auto elem: v)
    {
        std::cout << elem << ",";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector v{1,3,8,2,9};
    std::make_heap(v.begin(),v.end());
    printVector(v);

    while(!v.empty())
    {
        auto elem = v.front();
        std::pop_heap(v.begin(),v.end());
        v.pop_back();
        std::cout << elem << std::endl;
    }

    printVector(v);

    return 0;
}
