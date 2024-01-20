#include<iostream>
#include<algorithm>
#include<string>

// I don't recommend
// the macro version ... 
// use the STL version instead.
//#define MAX(a,b) (a>b)?a:b;

struct Monster {
    Monster(int pow, int agi, int mag, std::string n) : power(pow),agility(agi),magic(mag),name(n){}
    int power;
    int agility;
    int magic;
    std::string name;
};

std::ostream& operator<<(std::ostream& os, Monster const& m) {
    return os << m.name << " wins";
}

bool monster_melee_cmp(const Monster& a, const Monster& b) {
    int monster_a = a.power * b.agility;
    int monster_b = b.power * b.agility;
    return monster_a < monster_b;
}

bool monster_magic_cmp(const Monster& a, const Monster& b) {
    int monster_a = a.magic;
    int monster_b = b.magic;
    return monster_a < monster_b;
}

int main() {
    // Not recommended
    //int max = MAX(5,3);
    //std::cout << max << std::endl;

    std::cout << std::max(7,5) << std::endl;
    std::cout << std::max({8,3,9,4,5,7}) << std::endl;
    std::cout << std::min(7,5) << std::endl;
    std::cout << std::min({8,3,9,4,5,7}) << std::endl;

    Monster crusher{100,100,1,"Crusher"};
    Monster mage{1,10,100,"Mage"};

    std::cout << std::max(crusher,mage,monster_melee_cmp) << std::endl;
    std::cout << std::max(crusher,mage,monster_magic_cmp) << std::endl;
    
    return 0;
}
