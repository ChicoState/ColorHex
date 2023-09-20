#include <iostream>

const int RGB_HEX_LENGTH = 7;

bool isValidHex(std::string input) {
    for(int i=0; i<input.length(); i++) {
        if(input[i] != 'a' || input[i] != 'b' || input[i] != 'c' || input[i] != 'd' || input[i] != 'e' || input[i] != 'f' || !isdigit(input[i])) {
            return false;
        }
    }

    return true;
}

int main(){
    std::string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):\n";
        std::getline(std::cin, input);

        if(input[0] != '#') {
            std::cout << "Input must begin with '#'\n";
        }

        for(int i=0; i<input.size(); i++) {
            if(!isValidHex) {
                std::cout << "Input must be a number between 0-9 and or a letter between a - f\n";
            }
        }

        if( input.size() != RGB_HEX_LENGTH ){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }while( input.size() != RGB_HEX_LENGTH );

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}