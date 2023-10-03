#include <iostream>
#include <string>
#include <cctype>

using namespace std;
using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;

int main(){
    string input;
    bool allow;
    do{
        allow = true;
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);
        for (int i = 1; i < input.size(); i++) {
            if (!isxdigit(input[i])) {
                allow = false;
            }
        }
        if( input.size() != RGB_HEX_LENGTH || input[0] != '#'){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
        else if (allow == false) {
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }while( (input.size() != RGB_HEX_LENGTH) || (allow == false) || (input[0] != '#'));

    cout << "Your hex color is: " << input << endl;

    return 0;
}