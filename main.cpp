#include <iostream>

const int RGB_HEX_LENGTH = 7;

/*checks to see if
 * 1-the string starts with a #
 * 2-the string consists of only nums and letters
 */
bool good(std::string input)
{
     bool yeetback = true;
     for(int i = 0; i < 7; i++)
     {
       if(i == 0 && input[i] != '#')
       {
         yeetback = false;
       }
       else if(!isdigit(input[i]))
       {
         yeetback = false;
       }else if(!isalpha(input[i]))
       {
         yeetback = false;
       }
     }
     return yeetback;
}

int main(){
    std::string input;

    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(std::cin, input);
        if( input.size() != RGB_HEX_LENGTH ){
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
        else if(!good(input))
        {
          std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }while( input.size() != RGB_HEX_LENGTH );

    std::cout << "Your hex color is: " << input << std::endl;

    return 0;
}
