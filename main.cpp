#include <iostream>
#include <vector>

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;
using std::vector;

const int RGB_HEX_LENGTH = 7;

bool isValid(string hex) {
    std::vector<string> validValues = {"0", "1", "2", "3", "4", "5", "6",
        "7", "8", "9", "a", "A", "b", "B", "c", "C", "d", "D", "e", "E", "f", "F"};

    if (hex[0] != "#") {
        
    }
}

int main(){
    string input;

    do{
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);

        if( input.size() != RGB_HEX_LENGTH || !isValid(input)){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }while( input.size() != RGB_HEX_LENGTH || !isValid(input));

    cout << "Your hex color is: " << input << endl;

    return 0;
}