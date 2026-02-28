#include <iostream>
#include <string>
#include "src/oops.hpp"

int main() {
  std::string input;

  while (true) {
    std::cout << "Enter your number (0-100): ";
    std::cin >> input;

    if (input_validation(input)) {
      std::cout << "The user entered " << input << "\n";
      break;
    }

    std::cout << "Invalid input. Please enter a number between 0 and 100.\n";
  }

  return 0;
}
