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

		bool valid = true;
        if( input.size() != RGB_HEX_LENGTH ){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
			valid = false;
		}	
		
		if valid = true{
		if(input[0] != "#"){
			cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";	
			valid = false;
		}
		}
		
		
		if(valid = true){
		for(int i = 0; i < input.size(); i++){
			if(input[i] >= 'a' && input[i] <= 'f') || (input[i] >= 'A' && input[i] <= 'F' || input[i] >= '0' || input[i] <= '9'){
				valid = true;
			}
		}
		}
		
    }while( valid = false; );

    cout << "Your hex color is: " << input << endl;

    return 0;
}