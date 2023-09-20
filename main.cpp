#include <iostream>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if( input.size() != RGB_HEX_LENGTH ){
            
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
        if ( input[0] != '#' ){
            std::cout << "Error, please have the first char be #" << endl;
        }
        for(int i = 1; i < input.size(); i++){
            if(input[i] != 0 || input[i] != 1 || input[i] != 2 || input[i] != 3 || input[i] != 4 || input[i] != 5 || input[i] != 6 || input[i] != 7 || input[i] != 8 ||
                input[i] != 9 || input[i].lower() != 'a' || input[i].lower() != 'b' || input[i].lower() != 'c' || input[i].lower() != 'd' || input[i].lower() != 'e' ||
                input[i].lower() != 'f') {
                std::cout << "Error, please enter valid hex values [0-9] [a-f]" << endl;
            }
        }
    }while( input.size() != RGB_HEX_LENGTH );

    
    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
