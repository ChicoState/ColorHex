#include <iostream>
#include <cctype>

using namespace std;
const int RGB_HEX_LENGTH = 7;

int main(){
    string input;
    bool error = true;
    bool syntaxErr = false;
    do{
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);
        for(int i = 1; i < input.size(); i++) {
            // if not a letter
            if(!(isalpha(tolower(input[i])))) {
                // if not a number
                if(!(isdigit(input[i]))) {
                    syntaxErr = true; 
                } else {
                    syntaxErr = false;
                }
            }
        }
        if( input.size() != RGB_HEX_LENGTH || input[0] != '#' || syntaxErr == true){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        } else {
            error = false;
        }
    } while( error == true);

    cout << "Your hex color is: " << input << endl;

    return 0;
}
