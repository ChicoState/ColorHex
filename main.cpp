 #include <iostream>
  2 #include <cctype>
  3 #include <string>
  4
  5 using namespace std;
  6 const int RGB_HEX_LENGTH = 7;
  7
  8 bool check(string input){
  9     for(int i = 1; i < input.size(); i++){
 10         if(!isalpha(input[i])){
 11             return false;
 12         }else if(!isdigit(input[i])){
 13             return false;
 14         }
 15     }
 16     return true;
 17 }
 18
 19 int main(){
 20     string input;
 21
 22     do{
 23         cout << "Enter a color in hex format (#RRGGBB):";
 24         getline(cin, input);
 25
 26         if( input.size() != RGB_HEX_LENGTH || input[0] != '#' || check(i    nput)){
 27             cout << "Please enter the color in hexadecimal format, start    ing with # followed by six hex values\n";
 28         }
 29
 30
 31     }while( input.size() != RGB_HEX_LENGTH );
 32
 33     cout << "Your hex color is: " << input << std::endl;
 34
 35     return 0;
 36 }
