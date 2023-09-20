#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;
std::string validChars = "0123456789abcdefABCDEF";
bool validInput = true;

int main(){
    string input;

    do{
        validInput = true;
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);
        if( input.size() != RGB_HEX_LENGTH ){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values (0-9 or a-f)\n";
            validInput = false;
        } else if (input[0] != '#') {
        }

        for ( int i = 1; i < input.size(); i++) {
            if (!validChars.find(input[i])<input.length()) {
                cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values (0-9 or a-f)\n";
                validInput = false;
            }
        }
    }while( !validInput );

    cout << "Your hex color is: " << input << endl;

    return 0;
}