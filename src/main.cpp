#include <iostream>
#include <string>

int main(int argc, char** argv) {
    std::string schedule = argc > 2 ? argv[2] : "06:00,20:00";
    std::cout << "gardeninator watering at: " << schedule << std::endl;
    std::cout << "come on little one, PHOTOSYNTHESIZE!" << std::endl;
    return 0;
}
