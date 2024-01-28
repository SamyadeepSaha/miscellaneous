#include <iostream>
#include <algorithm>
#include <vector>
#include <ctime>

int main() {
    std::pair<int,int> s1 = std::minmax(7,2);
    std::pair<int,int> s2 = std::minmax(4,9);
    
    std::cout << s1.first << std::endl;
    std::cout << s1.second << std::endl;
    std::cout << s2.first << std::endl;
    std::cout << s2.second << std::endl;
    
    std::vector v{1,3,4,5,7,9,12,25,34};
    std::srand(std::time(0));
    const auto [lower_bound,upper_bound] = 
        std::minmax(std::rand() % v.size(),
                    std::rand() % v.size());
    std::cout << lower_bound << "," << upper_bound << std::endl;
    return 0;
}
