#include <iostream>

int main() {
    std::cout << "Enter an integer: ";
    int smaller{};
    std::cin >> smaller;
    

    std::cout << "Enter a larger integer: ";
    int larger{};
    std::cin >> larger;

    if (larger < smaller){
        std::cout << "Swapping the values" << "\n";
        int temp{smaller};
        smaller = larger;
        larger = temp;
        //OR std::swap(larger,smaller);
    }

    std::cout << "The smaller value is " << smaller << "\n";
    std::cout << "The larger value is " << larger << "\n";
    return 0;
}
