#include <iostream>
#include <ctype.h>
using namespace std;
const int RGB_HEX_LENGTH = 7;
int main(){
    std::string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(cin, input);

        if( input.size() != RGB_HEX_LENGTH && input[0] != '#' ){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }while( input.size() != RGB_HEX_LENGTH );
    int track = 0;
	while(track < RGB_HEX_LENGTH){
		if( input[track] == '#'||isdigit(input[track]) || isalpha(input[track]) ){
			track+=1;
		}else{
			std::cout<<"Please enter valide ipute: \n";
			std::getline(cin, input);
		}
	}
    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
