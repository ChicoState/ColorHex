#include <iostream>

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;

int main(){
    string input;
    bool correct = 0;

    do{
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);
	
 	if( input.size() != RGB_HEX_LENGTH || input[0] != '#'){
              cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
          }
          else if( input[0] == '#' ){
                  for(int i=1; i<7; i++){
                          if(!std::isxdigit(input[i])){
                                  cout << "Please enter the col    or in hexadecimal format, starting with # followed by six hex valu    es\n";
                                  break;
                          }
                          else{
                                  correct = 1;
                          }
                  }
          }
    }while( input.size() != RGB_HEX_LENGTH );

    cout << "Your hex color is: " << input << endl;

    return 0;
}
