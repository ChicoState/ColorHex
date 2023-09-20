#include <iostream>

const int RGB_HEX_LENGTH = 7;
const std::string NUMBERS = "0123456789";
const std::string LETTERS = "ABCDEFabcdef";
bool valid = false; 
int arr[7] ={}; 
int main(){
    std::string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if( input.size() != RGB_HEX_LENGTH || input[0] != "#"){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
        
        for(int i = 0; i < input.size(); i++){
            for(int j = 0; j < NUMBERS.size(); j++){
                if(input[i] == NUMBERS[j]){
                    arr[i] = 1;
                }
            }
            for(int k = 0; k < LETTERS.size(); k++){
                if(input [i] == LETTERS[k]){
                    arr[i] = 1;
                }
            }
        }
        for(int i = 0; i < RGB_HEX_LENGTH; i++){
            if (arr[i] == 1){
                valid = true;
            }
            else{
                valid = false;
            }
        }

    }while( input.size() != RGB_HEX_LENGTH || valid == false);

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}