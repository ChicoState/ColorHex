#include <iostream>

<<<<<<< HEAD
using namespace std;
=======
using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;
>>>>>>> c79a032b17ca1ac3a2f50a2afaa1aeaafa18d2f9

const int RGB_HEX_LENGTH = 7;

int main(){
    string input;

    do{
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);

        if( input.size() != RGB_HEX_LENGTH ){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }
    while( input.size() != RGB_HEX_LENGTH );

<<<<<<< HEAD
    int r, g, b;
    
    string x = to_string(input);

    const char* ccx = x.c_str();

    sscanf(input, "%02x%02x%02x", &r, &g, &b);

=======
>>>>>>> c79a032b17ca1ac3a2f50a2afaa1aeaafa18d2f9
    cout << "Your hex color is: " << input << endl;

    return 0;
}