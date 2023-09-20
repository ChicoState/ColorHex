#include <iostream>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;
    bool valid;

    do{
        valid = true;
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if( input.size() != RGB_HEX_LENGTH || input[0] != '#'){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
            valid = false;
        }

        for(int i = 1; i < RGB_HEX_LENGTH; i++){
            int ascii = int(input[i]);
            if(!(ascii >= 48 && ascii <= 57) && !(ascii >= 65 && ascii <= 70) && !(ascii >= 97 && ascii <= 102)){
                //character is not allowed
                std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
                valid = false;
                break;
            }
        }
        //input passed all tests
        
    } while(!valid);

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}