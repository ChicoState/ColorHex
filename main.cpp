#include <iostream>

#include <string>

const int RGB_HEX_LENGTH = 7;
using namespace std;

bool checkhelp(char p)
{
	if(isdigit(p))
	{
	 return true;
	}
	else if(tolower(p) == 'a' || tolower(p) == 'b' || tolower(p) == 'c' || tolower(p) == 'd' || tolower(p) == 'e' || tolower(p) == 'f')
	{
	  return true;
	}
	else
	{
	  return false;
	}
}

bool check(string p)
{
	for( int i = 0; p.size() != RGB_HEX_LENGTH; i++ )
          {
          	if(!checkhelp(p[i]))
          		return false;
          }
          
          return true;
    
}



int main(){
    string input;

    do{
        cout << "Enter a color in hex format (#RRGGBB):";
        getline(cin, input);


        if( (input.size() != RGB_HEX_LENGTH) || input[0] != '#' || !check(input))
        {
            std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        }
    }while( input.size() != RGB_HEX_LENGTH );

    cout << "Your hex color is: " << input << endl;

    return 0;
}
