#include <cctype>
#include <iostream>
#include <cstring>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(cin, input);
        if( input.size() != RGB_HEX_LENGTH || input[0] != "#"){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
        for (int i = 0; i < input.size(); i++){
            if (!isxdigit(input[i])){
                std::cout << "Please enter character values between 0-9, a-f, and A-F\n";
            }
        }
    }while( input.size() != RGB_HEX_LENGTH );

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}