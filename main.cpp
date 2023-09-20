#include <iostream>

const int RGB_HEX_LENGTH = 7;

bool is_hex_formatted(const std::string &maybe_hex) {
    if (maybe_hex.size() != RGB_HEX_LENGTH) {
        return false;
    }

    if (maybe_hex[0] != '#') {
        return false;
    }

    for (size_t i = 1; i < maybe_hex.size(); i++) {
        // check if not in range of number ascii values or hex letter ascii
        // values, if not, invalid
        if (!((maybe_hex[i] >= '0' && maybe_hex[i] <= '9') ||
              (maybe_hex[i] >= 'a' && maybe_hex[i] <= 'f') ||
              (maybe_hex[i] >= 'A' && maybe_hex[i] <= 'F'))) {
            return false;
        }
    }

    return true;
}

int main() {
    std::string input;
    bool hex_formatted = false;

    do {
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);
        hex_formatted = is_hex_formatted(input);

        if (!hex_formatted) {
            std::cout << "Please enter the color in hexadecimal format, "
                         "starting with # followed by six hex values\n";
        }
    } while (!hex_formatted);

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
