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
	      bool invalid_char_found = false;
        if(input.size() != RGB_HEX_LENGTH || input[0] != '#'){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
	    input = "";
	}
      	else{
	          for (int i=1; i < RGB_HEX_LENGTH; i++) {
               if ((input[i] >= '0' && input[i] <= '9') || (input[i] >= 'a' && input[i] <= 'f') || (input[i] >= 'A' && input[i] <= 'F')){
		              invalid_char_found = false;
	             }
	             else{
		              invalid_char_found = true;
                  break;
	             }
            }
          	if (invalid_char_found){
               cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
	             input = "";
            }
        }
    }while( input.size() != RGB_HEX_LENGTH );

    cout << "Your hex color is: " << input << endl;

    return 0;
}
