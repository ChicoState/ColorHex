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
                //Check if input is a valid hex value within given range
              if (input[i] > 9 || input[i] < 0 || (input[i] < 'f' && input[i] > 'a')) {
                if (input[i] != 'A' || input[i] != 'B' ||input[i] != 'C' ||input[i] != 'D' ||input[i] != 'E' ||input[i] != 'F') {
                                  std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
                    break;
                }

              }
            }
        }
    }while( input.size() != RGB_HEX_LENGTH );

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
