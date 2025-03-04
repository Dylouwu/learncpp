#include <iostream>

double getDouble(){

    std::cout << "Enter a double value: ";
    double x{};
    std::cin >> x;
    return x;

}

int main() {
    double x{ getDouble() };
    double y{ getDouble() };

    char c{};
    while (c != '+' && c != '-' && c != '*' && c != '/'){
        std::cout << "Enter +, -, *, or /: ";
        std::cin >> c;
    }
    
    if (c == '+'){
        std::cout << x << " + " << y << " is " << x + y;
    }
    else if (c == '-'){
        std::cout << x << " - " << y << " is " << x - y;
    }
    else if (c == '*'){
        std::cout << x << " * " << y << " is " << x * y;
    }
    else{
        std::cout << x << " / " << y << " is " << x / y;
    }
    return 0;
}
