#include <iostream>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;
    bool check = true;
    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if( input.size() != RGB_HEX_LENGTH && input[0] != '#'){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
	for(int i = 0; i< input.size()-1;i++){
	    if(input[i] != 'a' || input[i] != 'b' ||input[i] != 'c'|| input[i] != 'd' ||input[i] != 'e' ||input[i] != 'f' ||input[i] != '0' || input[i] != '1' || input[i] != '2' ||input[i] != '3' || input[i] != '4' ||input[i]!= '5' ||input[i] != '6' || input[i] != '7' || input[i] != '8' || input[i] != '9'){
	    	std::cout<<"Please enter the color in valid hexadecimal format, starting with # followed by six hex values\n";
		check = false;
	    }
	}
    }while( input.size() != RGB_HEX_LENGTH && check != true);

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
