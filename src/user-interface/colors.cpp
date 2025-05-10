#include "colors.h"
#include <iostream>
#include <string>
#include <map>


int printColored(Color color, const std::string& text) {
    if(colorCodes.find(color) != colorCodes.end()) {
        std::cout << colorCodes.at(color) << text << colorCodes.at(Color::RESET);
        return 1; // Color found and printed
    } else {
        std::cout << text;
        return 0; // Color not found
    }
}

void printBold(const std::string& text) {
    std::cout << "\033[1m" << text << "\033[0m";
}
void printUnderlined(const std::string& text) {
    std::cout << "\033[4m" << text << "\033[0m";
}
void printError(const std::string& text) {
    std::cerr << "\033[31m" << text << "\033[0m"; // Print in red
}
