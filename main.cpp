#include <iostream>
// Needed for getline
#include <string>
// Needed for isxdigit
#include <ctype.h>

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;

int main(){
    string input;
    bool validHex = true;

    do{
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);

        if( input.size() != RGB_HEX_LENGTH || input[0] != '#'){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        } else {
            // Check to make sure each remaining character is a valid hex value starting at 1 to skip the #
            for( int i = 1; i < RGB_HEX_LENGTH; i++ ){
                if(!isxdigit(input[i])){
                    cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
                    validHex = false;
                    break;
                }
            }
            if(validHex){
                cout << "Your hex color is: " << input << endl;
            }
        }
    }while( input.size() != RGB_HEX_LENGTH );

    return 0;
}