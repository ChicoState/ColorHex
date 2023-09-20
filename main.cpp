#include <iostream>

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;
    bool alnum;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);

        if((input.size() != RGB_HEX_LENGTH) || (input[0] != '#')){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
	      int x = 1;
	      alnum = true;
	      while(x < input.size()){
		      if (!(isalnum(input[x]))){
			      alnum = false;
			      std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
			      break;
		      }
		      x++;
	      }
    }while( (input.size() != RGB_HEX_LENGTH) || (input[0] != '#') || (alnum == false));

    cout << "Your hex color is: " << input << endl;

    return 0;
}
