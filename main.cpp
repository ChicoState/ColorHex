#include <iostream>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;
    bool error;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        for(int i = 1; i < input.size(); i++) {
            if(!(isalpha(tolower(input[i]))) || input[i] == 'G' || input[i] == 'H' || input[i] == 'I' || input[i] == 'J' || input[i] == 'K' || input[i] == 'L' || input[i] == 'M' || input[i] == 'N' || input[i] == 'O' || input[i] == 'P' || input[i] == 'Q' || input[i] == 'R' || input[i] == 'S' ) {      
                if(!(isdigit(input[i]))) {
                    error = false; 
                } else {
                    error = true;
                }
            }
        }

        if( input.size() != RGB_HEX_LENGTH || input[0] != '#' || !error){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }while( input.size() != RGB_HEX_LENGTH );

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
