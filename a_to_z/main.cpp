#include <iostream>

int main() {
    char c {'A'};
    while (c <= 'Z') {
        std::cout << c << " " << static_cast<int>(c) << " ";
        ++c;
    }
    return 0;
}
