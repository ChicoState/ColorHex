#include <iostream>

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(cin, input);
	int wrong = 0;
        if( input.size() != RGB_HEX_LENGTH || input[0] != '#'){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
   	for(int i = 1; i < 7; i++)
	{
		if(!isdigit(input[i] || input[i] != 'a' ||input[i] != 'b' || input[i] != 'c' || input[i] != 'd' || input[i] != 'e' || input[i] != 'f')
		{wrong = 1; std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
} 
	}while( input.size() != RGB_HEX_LENGTH || input[0] != '#' || wrong == 1);

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
