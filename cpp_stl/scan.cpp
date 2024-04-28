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
  std::vector<int> data{1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::vector<int> inclusive_results(9);
  std::vector<int> exclusive_results(9);

  std::cout << "Data: " << data << std::endl;

  std::inclusive_scan(data.begin(), data.end(), inclusive_results.begin());
  std::cout << "Inclusive results: " << inclusive_results << std::endl;

  std::exclusive_scan(data.begin(), data.end(), exclusive_results.begin(), 1,
                      std::multiplies<>{});
  std::cout << "Exclusive results: " << exclusive_results << std::endl;

  return 0;
}
