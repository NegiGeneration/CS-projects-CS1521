#include <iostream>
#include "rot5_13.h"

int main () {

    std::string stuff;
    std::string encrypted;
    std::string decrypted;
    std::cout << "enter in anything " << std::endl;
    getline(std::cin, stuff);

    for(char ch: stuff) {
        rot5_rot13(ch);
        encrypted += ch;
    }
    for(char ch: encrypted) {
        rot5_rot13(ch);
        decrypted += ch;
    }
    std::cout << encrypted << std::endl;
    std::cout << decrypted << std::endl;

} // end of main