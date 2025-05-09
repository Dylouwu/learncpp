#include <iostream>

bool isPrime(int x){
    switch (x)
    {
        case 2: // if the user entered 2
        case 3: // or if the user entered 3
        case 5: // or if the user entered 5
        case 7: // or if the user entered 7
            return true; // then the digit is prime
    }

    return false; // otherwise the digit must not be prime
}

int main() {
    std::cout << "Enter a digit between 0 and 9: ";
    int num{};
    std::cin >> num;

    if(isPrime(num)){
        std::cout << "The digit is prime";
    }
    else{
        std::cout << "The digit is not prime";
    }
    
    return 0;
}
