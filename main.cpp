#include <iostream>

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;

int main(){
    string input;
    bool good_input = true;
    do{
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);

        if( input.size() != RGB_HEX_LENGTH){
            good_input = false;
            continue;
        }
        if( input[0] != '#' ){
            good_input = false;
            continue;
        }
        for (int i = 0; i < sizeof(input)-1; i++) {
            if (!(input[i+1] == 0 || input[i+1] == 1 || input[i+1] == 2 || input[i+1] == 3 || input[i+1] == 4|| input[i+1] == 5|| input[i+1] == 6|| input[i+1] == 7|| input[i+1] == 8|| input[i+1] == 9)) {
                good_input = false;
                break;
            }
        }
        cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
    }while(!good_input);

    cout << "Your hex color is: " << input << endl;

    return 0;
}
