#include <iostream>

void fiveToOne()
{
    int outer{ 5 };
    while (outer >= 1)
    {
        int inner{ outer };
        while (inner >= 1)
        {
            std::cout << inner << ' '; //or inner--
            --inner;
        }

        std::cout << '\n';
        --outer;
    } 
    std::cout << '\n';
}

void oneToFiveReversed(){
    
    int outer{1};

    while (outer <= 5){

        int inner{5};
        while(inner >= 1){

            if (inner > outer){
                std::cout << "  ";
            }
            else {
                std::cout << inner << ' ';
            }
            --inner;
        }
        ++outer;
        std::cout << '\n';
    }
    std::cout << '\n';
}

int main()
{
    fiveToOne();
    oneToFiveReversed();
    return 0;
}
