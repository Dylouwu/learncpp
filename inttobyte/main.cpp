// Write a program that asks the user to input a number between 0 and 255. Print
// this number as an 8-bit binary number (of the form #### ####). Don’t use any b
// twise operators. Don’t use std::bitset. CHECKING: If the user enters a
// number that is outside the range of 0 to 255, the program should tell the
// user that the number is out of range and then terminate.
#include <cmath>
#include <iostream>

int main() {

  std::cout << "Input a number between 0 and 255: ";
  int input{};
  std::cin >> input;

  if (input < 0 || input > 255) {
    std::cout << "The number is out of range." << std::endl;
    return 1;
  }

  for (int i = 7; i >= 0; i--) {
    if (input / static_cast<int>(pow(2, i)) % 2 == 1) { //could be simplified with a ternary operator
      std::cout << 1;
    } else {
      std::cout << 0;
    }
  }
  std::cout << std::endl;
  return 0;
}
