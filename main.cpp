#include <iostream>

using std::cout;
using std::cin;
using std::getline;
using std::string;
using std::endl;

const int RGB_HEX_LENGTH = 7;

int main(){
	std::string input;
	bool hexValue = true;
    while (hexValue) {
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(cin, input);

        if( input.size() != RGB_HEX_LENGTH ){  
	  std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }if( input.size() == RGB_HEX_LENGTH ){
	std::cout << "Your hex color is: " << input << std::endl;
	hexValue = false;
     }
    return 0;
}
