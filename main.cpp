#include <cctype>
#include <iostream>
#include <cstring>
#include <string>

const int RGB_HEX_LENGTH = 7;

bool check_hex(char* input_array[]){
        if(input_array.size() != RGB_HEX_LENGTH || input_array[0] != "#"){
        std::cout << "Please enter the color in hexadecimal format, starting with # followed by six hex values\n";
        return false;
    }
    for (int i = 0; i < input_array.size(); i++){
        if (!isxdigit(input_array[i])){
            std::cout << "Please enter character values between 0-9, a-f, and A-F\n";
            return false;
        }
    }
    return true;
}

int main(){
    std::string input;
    do{
        std::cout << "Enter a color in hex format (#RRGGBB):";
        std::getline(cin, input);
        char* input_array = new char[length + 1];
        strcpy(input_array, s.c_str());
    }while(!check_hex(input_array));
    cout << "Your hex color is: " << input << endl;

    return 0;
}