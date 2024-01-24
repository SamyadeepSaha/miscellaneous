#include<iostream>
#include<vector>
#include<algorithm>

struct Monster {
    int power;
    int strength;
};

bool monster_cmp(const Monster& a, const Monster& b) {
    int valueA = a.power * a.strength;
    int valueB = b.power * b.strength;
    return valueA < valueB;
}

std::ostream& operator<<(std::ostream& os, const Monster& m) {
    return os << m.power << ", " << m.strength;
}

int main() {
    std::vector<int> v{1,3,5,7,6,4,2,0,-2,6};
    std::cout << "Vector:";
    for(auto i:v) std::cout << " " << i;
    std::cout << std::endl;

    auto min = std::min_element(v.begin(),v.end());
    std::cout << "Min element: " << *min << std::endl;
    auto max = std::max_element(v.begin(),v.end());
    std::cout << "Max element: " << *max << std::endl;
    
    std::cout << std::endl;

    std::vector<Monster> m{{7,2},{5,7},{10,11}};

    auto weak = std::min_element(m.begin(),m.end(),monster_cmp);
    std::cout << "Weakest Monster: " << *weak << std::endl;
    auto strong = std::max_element(m.begin(),m.end(),monster_cmp);
    std::cout << "Strongest Monster: " << *strong << std::endl;
    
    return 0;
}
