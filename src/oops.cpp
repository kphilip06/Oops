#include <string>

bool input_validation(std::string input) {
    int numer_value = std::stoi(input);
    if (numer_value < 0 || numer_value > 100) {
        return false;
    }
    return true;
}
