#include <iostream>
#include <ctype.h>

using namespace std;

const int RGB_HEX_LENGTH = 7;

int main(){
    std::string input;
    bool test1 = false;
    bool test2 = false;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);
        if (input.at(0) == '#')
            test1 = true;
        for (int i = 1; i < input.size(); i++)
        {
            if (isdigit(input.at(i)))
            {
                test2 = true;
            }
            else
            {
                test2 = false;
                break;
            }
        }
        if( input.size() != RGB_HEX_LENGTH || !test1 || !test2){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }while( input.size() != RGB_HEX_LENGTH || !test1 || !test2);

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
