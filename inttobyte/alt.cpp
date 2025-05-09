#include <iostream>

int main() {
  int x{};
  std::cout << "Enter a positive number: ";
  std::cin >> x;
  std::string bits{(x == 0) ? "0" : ""};

  int _x{x};

  while (_x > 0) {
    bits = std::to_string(_x % 2) + bits;
    _x /= 2;
  }

  std::cout << "The binary representation of " << x << " is: " << bits << '\n';

  return 0;
}
