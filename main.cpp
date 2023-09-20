#include <iostream>
#include <string.h>
using namespace std;

using std::string;
using std::cout;
using std::getline;
using std::endl;
using std::cin;

const int RGB_HEX_LENGTH = 7;
/*
the input needs to satisfy all of the following:
It must be exactly seven characters long
The first character must be #
Each of the following six characters must be either a digit (0 through 9, inclusive) or a letter (a through f, inclusive and upper/lower case are both acceptable)
*/

bool check_input(string s)
{
    for (int i = 1; i < s.size(); i++)
    {
        // 0 through 9
        // a through f
        if (s[i] = '0' || '1' || '2' || '3' || '4' || '5' || '6' || '7' || '8' || '9' || 'a' || 'b' || 'c' || 'd' || 'e' || 'f')
        {
            return true;
        }
        else
            return false;
    }
}

int main()
{
    std::string input;

    do
    {
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(cin, input);

        if (input.size() != RGB_HEX_LENGTH)
        {
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
        if (input[RGB_HEX_LENGTH - 1] != '#')
        {
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
        if (check_input(input))
        {
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";

int main(){
    string input;

    do{
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);

        if( input.size() != RGB_HEX_LENGTH ){
            cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    } while (input.size() != RGB_HEX_LENGTH && input[RGB_HEX_LENGTH - 1] != '#' && check_input(input) == 0);

    cout << "Your hex color is: " << input << endl;

    return 0;
}
