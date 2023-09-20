#include <iostream>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;
    int ind = 0;
    int flag = 0;
    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if( input.size() != RGB_HEX_LENGTH ){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
            break;
        }

        if(input[ind] == '#'){
                ind++;
        }
        else{
                std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
                break;
        }

        while(ind < input.size()){
                if(input[ind] == 'a' || input[ind] == 'b' || input[ind] == 'c' || input[ind] == 'd' || input[ind] == 'e' || input[ind] == 'f'
                                || input[ind]== '0' || input[ind] == '1' || input[ind] == '2' || input[ind] == '3' || input[ind] == '4' || input[ind] == '5'                                || input[ind] == '6' || input[ind] == '7' || input[ind] == '8' || input[ind] == '9'){
                        ind++;

                }
                else{
                        std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
                        break;
                }

        }
        if(ind == input.size()){
                flag = 1;
        }

    }while( input.size() != RGB_HEX_LENGTH || flag == 0);

    if(flag == 1){
        std::cout << "Your hex color is: " << input << std::endl;
        }
    return 0;
}
