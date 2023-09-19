#include <iostream>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;
    bool flag = true;
    do{
	while (flag){
        	std::cout << "Enter a color in hex format (#RRGGBB):";
        	std::getline(std::cin, input);

        	if( input.size() != RGB_HEX_LENGTH ){
            		std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
		
		else if (!isdigit(input.at(0))){
			//std::cout << "TEST";
			//flag = false;
			std::cout << "First value MUST be a integer...\n";
	}
	
		for (int i = 1;i < 6;i++){
			bool flag2 = true;
			if (!isdigit(input.at(i))){
				std::cout << "Values after first digit must be integer or between a-f\n";
				flag2 = false;
			}
			else if (input.at(i) <= 'a' || input.at(i) >= 'f'){
				std::cout << "Values after first digit must be integer or between a-f\n";
				flag2 = false;
		}
			else if (input.at(i) <= 'A' || input.at(i) >= 'F'){
				std::cout << "Values after first digit must be integer or between a-f\n";
				flag2 = false;
			}

		}	
    	}
    }while( input.size() != RGB_HEX_LENGTH && !isdigit(input.at(0)) && flag == true);

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
