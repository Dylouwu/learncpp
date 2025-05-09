#include <iostream>

// Returns the current ball height after "seconds" seconds
double getBallHeight(int seconds){

    return 9.8 * (seconds * seconds) / 2.0;

}

int main() {
    std::cout << "Enter the height of the tower in meters: ";
    int height{};
    std::cin >> height;

    for(int i = 0; i <= 5; i++){
        double currentheight{ height-getBallHeight(i) };
        if (currentheight > 0){
            std::cout << "At " << i << " seconds, the ball is at height: " << currentheight << " meters\n";
        }
        else{
            std::cout << "At " << i << " seconds, the ball is on the ground.\n";
        }
        
    }
    return 0;
}
