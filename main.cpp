#include <iostream>
#include <cctype>

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;

bool isValidHex(string input) {
    for(int i = 1; i < input.size(); i++) {
        if(!isxdigit(input[i])) {
            return false;
        }
    }
    return true;
}

int main(){
    string input;

    do{
        cout << "Enter a color in hex format (#RRGGBB): ";
        getline(cin, input);
        if( input.size() != RGB_HEX_LENGTH ){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
        else if(!isValidHex(input)) {
            cout << "Please enter the color in hexadecimal format (#RRGGBB)\n";
        }
        else {
            cout << "Your hex color is: " << input << endl;
        }
    }while( input.size() != RGB_HEX_LENGTH );

    return 0;
}