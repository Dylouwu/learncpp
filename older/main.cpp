#include <iostream>
#include <string>
#include <string_view>

std::string getName(int nbPerson){
    
    std::cout << "Enter the name of person #" << nbPerson << ": ";
    std::string name{};
    std::getline(std::cin >> std::ws, name);
    return name;

}

int getAge(std::string_view name){
    
    std::cout << "Enter the age of " << name << ": ";
    int age;
    std::cin >> age;
    return age;

}

int main() {
    
    const std::string firstName { getName(1) };
    const int firstAge { getAge(static_cast<std::string_view>(firstName)) };//static cast not compulsory
    
    const std::string secondName { getName(2) };
    const int secondAge { getAge(static_cast<std::string_view>(secondName)) };//static cast not compulsory
    

    if (firstAge >= secondAge)//function better
        std::cout << firstName << " (age " << firstAge << ") is older than " << secondName << " (age " << secondAge << ").";
    else
        std::cout << secondName << " (age " << secondAge << ") is older than " << firstName << " (age " << firstAge << ").";

    return 0;
}
