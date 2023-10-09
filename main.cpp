#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;
int main(){
    std::string input;
    bool state;
    
    do{
        state = true;
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if( input.size() != RGB_HEX_LENGTH ){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
            state = false;
        }else if(input[0] != '#' || (!isxdigit(input[1]) || !isxdigit(input[2]) || !isxdigit(input[3]) || !isxdigit(input[4]) || !isxdigit(input[5]) || !isxdigit(input[6]))){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
            state = false;

        }
    }while( input.size() != RGB_HEX_LENGTH || state == false );

    cout << "Your hex color is: " << input << endl;

    return 0;
}