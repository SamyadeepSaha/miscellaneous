#include <execution>
#include <iostream>
#include <numeric>
#include <vector>

// Operator << overloaded to print integer vector.
std::ostream &operator<<(std::ostream &outputStream,
                         const std::vector<int> &vectorObj) {
  for (int element : vectorObj) {
    outputStream << element << " ";
  }
  return outputStream;
}

int main() {
  std::vector<int> v{1, 2, 3, 4, 5, 6, 7, 8, 9};

  std::cout << "V1: " << v << std::endl;
  // It is nice to have the initial value. And it is recomended to have right
  // type. For example intger (0), or double (0.0).
  std::cout << "V1 reduce: "
            << std::reduce(std::execution::par, v.begin(), v.end(), 0)
            << std::endl;

  return 0;
}
