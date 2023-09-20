#include <iostream>
#include <ctype.h>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;

    bool validColor = false;
    
    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        validColor = true;
        
        if( input.size() != RGB_HEX_LENGTH ){ //check if input is right size
            validColor = false;
        }
        if (input[0] != '#') //check if it starts with #
        {
            validColor = false;
        }
        for (int i = 1; i < RGB_HEX_LENGTH; i++) //check rest of characters
        {
            char z = input[i];
            if (!isalpha(z) && !isdigit(z))
            {
                validColor = false;
            }
        }
        if (!validColor)
        {
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }while( validColor == false );

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
