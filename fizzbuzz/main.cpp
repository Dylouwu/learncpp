#include <iostream>

void fizzbuzz(int max) {
  for (int i{1}; i <= max; ++i) {

    if (i % 3 == 0) {
      std::cout << "fizz";
    }
    if (i % 5 == 0) {
      std::cout << "buzz";
    }
    if (i % 5 != 0 && i % 3 != 0) {
      std::cout << i;
    }
    std::cout << "\n";
  }
}

void fizzbuzzpop(int max) {
  for (int i{1}; i <= max; ++i) {
    if (i % 3 == 0) {
      std::cout << "fizz";
    }
    if (i % 5 == 0) {
      std::cout << "buzz";
    }
    if (i % 7 == 0) {
      std::cout << "pop";
    }
    if (i % 3 != 0 && i % 5 != 0 && i % 7 != 0) {
      std::cout << i;
    }
    std::cout << "\n";
  }
}

int main() {
  std::cout << "Up to what number should we count for fizzbuzz: ";
  int max{};
  std::cin >> max;

  // fizzbuzz(max);
  fizzbuzzpop(max);
  return 0;
}

// best solution :
/* #include <iostream> */
/**/
/* void fizzbuzz(int max) { */
/*   for (int i = 1; i <= max; ++i) { */
/*     bool fizz = (i % 3 == 0); */
/*     bool buzz = (i % 5 == 0); */
/**/
/*     if (fizz || buzz) { */
/*       if (fizz) std::cout << "fizz"; */
/*       if (buzz) std::cout << "buzz"; */
/*     } else { */
/*       std::cout << i; */
/*     } */
/*     std::cout << "\n"; */
/*   } */
/* } */
/**/
/* int main() { */
/*   std::cout << "Up to what number should we count for fizzbuzz? "; */
/*   int max; */
/*   std::cin >> max; */
/**/
/*   fizzbuzz(max); */
/*   return 0; */
/* } */
