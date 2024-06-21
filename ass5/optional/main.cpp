#include <iostream>
#include "solution.h"

int main() {
    std::string input;
    std::cout << "Enter a string to parse as an integer: ";
    std::cin >> input;

    std::optional<int> result = parseInteger(input);

    if (result) {
        std::cout << "Parsed integer: " << *result << std::endl;
    } else {
        std::cout << "Error: Invalid input. Could not parse an integer." << std::endl;
    }

    return 0;
}
