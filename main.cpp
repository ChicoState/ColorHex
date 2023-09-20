#include <iostream>
#include <string>
using namespace std;

const int RGB_HEX_LENGTH = 7;

int main(){
    string input;
    bool result = false;

    do{
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);

        if( input.size() != RGB_HEX_LENGTH || input[0] != '#'){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }while( input.size() != RGB_HEX_LENGTH );

    for (int i = 1; i < input.size(); i++) {
        if((input[i] >= 48 && input[i] <= 57) && (input[i] >= 97 && input[i] <= 102) && (input[i] >= 65 && input[i] <= 70)) {
            result = true;
        }
    }
    if (result = true){
        cout << "Your hex color is: " << input << endl;
    }

    return 0;
}