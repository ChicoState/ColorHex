#include <iostream>

const int RGB_HEX_LENGTH = 7;

bool checkInput(string input){
        for (int i = 0; i < input.size(); i++){
                if (!isalpha(input[i]) || !isdigit(input[i]))
                {
                        return false;
                }
        }
        return true;
}

int main(){
    std::string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(cin, input);

        if( input.size() != RGB_HEX_LENGTH && input[0] != '#' && !checkInput(input) ){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }while( input.size() != RGB_HEX_LENGTH && input[0] != '#' && !checkInput(input) );

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
