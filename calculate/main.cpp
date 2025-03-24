#include <iostream>

int calcultate(int a, int b, char op) {
    switch(op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '%':
        return a % b;
    default:
        std::cout << "Invalid operator" << std::endl;
        return 0;
    }
}

int main(){

    std::cout << "Enter the first integer : ";
    int a{};
    std::cin >> a;

    std::cout << "Enter the second integer : ";
    int b{};
    std::cin >> b;

    std::cout << "Enter the operator (+,-,*,/,%) : ";
    char op{};
    std::cin >> op;

    if ((op != '+') && (op != '-') && (op != '*') && (op != '/') && (op != '%')) {//USELESS CAUSE DEFAULT LOLOLOLOL
        std::cout << "Invalid operator" << std::endl;
        return 1;
    }

    int result {calcultate(a, b, op)};
    std::cout << "Result of " << a << " " << op << " " << b << " = " << result << std::endl;


    return 0;
}

