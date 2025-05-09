#include <iostream>

int sumTo(int x) {
  int total{};
  for (int i{1}; i <= x; i++)
    total += i;
  return total;
}

int main() {
  std::cout << "Hello, World!" << std::endl;

  for (int i{0}; i <= 20; i += 2)
    std::cout << i << " ";

  std::cout << "\n";

  std::cout << sumTo(5) << std::endl;
  return 0;
}
