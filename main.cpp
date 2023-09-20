#include <iostream>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(cin, input);
	if(input[0] != '#'){
		std::cout<< "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
		break;
	}
	for(int i = 0; i < input.size(); i++){
		if(input[i] != 'A' & input[i] != 'B' & input[i] != 'C' & input[i] != 'D' & input[i] != 'E' & input[i] != 'F' & input[i] >= 0){
			continue;
		}
		else{
			std::cout<< "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
			break;
		}
	}
        if( input.size() != RGB_HEX_LENGTH ){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
	
    }while( input.size() != RGB_HEX_LENGTH | input[0] != '#');

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
