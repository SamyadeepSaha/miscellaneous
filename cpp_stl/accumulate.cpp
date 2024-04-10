#include <iostream>
#include <numeric>
#include <vector>

int main() {
  std::vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  int sum = 0;
  for (size_t i = 0; i < v.size(); i++) {
    sum += v[i];
  }
  std::cout << "Sum: " << sum << std::endl;

  int result = 0;
  int current = 0;
  for (size_t i = 0; i < v.size(); i += 2) {
    current = v[i] + v[i + 1];
    result += current;
  }
  std::cout << "Result: " << result << std::endl;

  std::cout << "Accumulate: " << std::accumulate(v.begin(), v.end(), 0)
            << std::endl;

  return 0;
}
