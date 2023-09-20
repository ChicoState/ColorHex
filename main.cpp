#include <iostream>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;
    bool hexornot = true;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);
        hexornot = true;
        
        for (int i = 1; i < input.size(); i++) {
                if (!isalpha(input[i]) & !isdigit(input[i])) {
                    hexornot = false;
            }
        }

        if( input.size() != RGB_HEX_LENGTH & input[0] != '#' & hexornot != true){
          
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }while( input.size() != RGB_HEX_LENGTH & input[0] != '#' & hexornot != true);

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}