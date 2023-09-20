#include <iostream>
#include <vector>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if( input.size() != RGB_HEX_LENGTH || input[0] != '#' ){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
            for (int i = 1; i < input.size(); i++ ) {
                //Check if input is a valid hex value
              if (input[i] > 9 || input[i] < 0 || input[i] > 'F' || input[i] < 'A') {
                std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
                break;
              }
            }
        }
    }while( input.size() != RGB_HEX_LENGTH );

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
