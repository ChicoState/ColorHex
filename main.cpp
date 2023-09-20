#include <iostream>
#include <string>

const int RGB_HEX_LENGTH = 7;
std::string validChars = "0123456789abcdefABCDEF";
bool validInput = true;

int main(){
    std::string input;

    do{
        validInput = true;
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if( input.size() != RGB_HEX_LENGTH ){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values (0-9 or a-f)\n";
            validInput = false;
        } else if (input[0] != '#') {
            std::cout << "Please begin the input with '#'\n";
            validInput = false;
        }

        for ( int i = 1; i < input.size(); i++) {
            if (!validChars.find(input[i])<input.length()) {
                std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values (0-9 or a-f)\n";
                validInput = false;
            }
        }
    }while( !validInput );

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}