#include <iostream>
#include <string>
#include <map>

enum class Color {
    RESET,
    BLACK,
    RED,
    GREEN,
    YELLOW,
    BLUE,
    MAGENTA,
    CYAN,
    WHITE
};

const std::map<Color, std::string> colorCodes = {
    {Color::RESET, "\033[0m"},
    {Color::BLACK, "\033[30m"},
    {Color::RED, "\033[31m"},
    {Color::GREEN, "\033[32m"},
    {Color::YELLOW, "\033[33m"},
    {Color::BLUE, "\033[34m"},
    {Color::MAGENTA, "\033[35m"},
    {Color::CYAN, "\033[36m"},
    {Color::WHITE, "\033[37m"}
};


int printColored(Color color, const std::string& text);
void printBold(const std::string& text);
void printUnderlined(const std::string& text);
void printError(const std::string& text);