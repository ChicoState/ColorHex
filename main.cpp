#include <iostream>

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;

bool is_hex_notation(std::string const& s){
  return s.compare(0, 1, "#") == 0
      && s.size() == RGB_HEX_LENGTH
      && s.find_first_not_of("0123456789abcdefABCDEF", 1) == std::string::npos;
}

int main(){
    string input;

    do{

        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if (!is_hex_notation(input))
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
    } while (!is_hex_notation(input));


    cout << "Your hex color is: " << input << endl;

    return 0;
}
