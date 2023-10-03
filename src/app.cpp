#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("banner.txt");

    if (!file.is_open()) {  // Check if was file openned
        std::cerr << "Failure on banner.txt read" << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(file, line)) {
        std::cout << line << std::endl;
    }

    file.close();
    std::cout << std::endl;
    return 0;
}
