#include <iostream>

int doubleNumber(int value){

    return value*2;

}

int main() {
    
    std::cout << "Enter an integer: ";
    int x{};
    std::cin >> x;

    std::cout << "Doubled value: " << doubleNumber(x);

    return 0;
}
