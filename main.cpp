#include <iostream>

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;

bool checkInput(string input){
        for (int i = 0; i < input.size(); i++){
                if (!isalpha(input[i]) || !isdigit(input[i]))
                {
                        return false;
                }
        }
        return true;
}

int main(){
    string input;

    do{
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);


        if( input.size() != RGB_HEX_LENGTH && input[0] != '#' && !checkInput(input) ){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
      
    }while( input.size() != RGB_HEX_LENGTH && input[0] != '#' && !checkInput(input) );

    cout << "Your hex color is: " << input << endl;

    return 0;
}
