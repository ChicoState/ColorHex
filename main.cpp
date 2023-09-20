#include <iostream>

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;

// Comment to test Github Action

int main(){
    string input;

    do{
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);

        if( input.size() != RGB_HEX_LENGTH ){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }

	if( input[0] != '#'){
		cout << "RGB value not prefixed by \'#\' Character" << endl;
		exit(-1);
	}

	// TODO: Use actual std lib functions for pattern matching, regex?
	for( int i = 1; i < input.length(); i++) {
		if(( 0 < input[i] && input[i] < 9) || ('a' < input[i] && input[i] < 'f')){
			cout << "Illegal character in RGB hex. Format input as hex with letters in lowercase" << endl;
		}
	}
    }while( input.size() != RGB_HEX_LENGTH );

    cout << "Your hex color is: " << input << endl;

    return 0;
}
