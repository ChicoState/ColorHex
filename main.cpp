#include <iostream>

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;

int main(){
    string input;

    do{
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);

        if( input.size() != RGB_HEX_LENGTH ){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
	//Check if input is # using ASCII value
	if (input[0] != 35)
	{
		cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
    }	
    }
	//Check if input is appropriate size then output response
	while( input.size() == RGB_HEX_LENGTH );

    cout << "Your hex color is: " << input << endl;

    return 0;
}
