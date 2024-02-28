#include <iostream>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if( input.size() != RGB_HEX_LENGTH ){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
	//Check if input is # using ASCII value
	if (input[0] != 35)
	{
		cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
    }	
    }
	//Check if input is appropriate size then output response
	while( input.size() == RGB_HEX_LENGTH );

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
