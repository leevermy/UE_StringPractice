#include "func.h"

int main() {
    std::string stream;
    std::cout << "\nPlease, write a line/string: ";
    getline(std::cin, stream);
    
    std::cout << std::endl;

    Print(stream);
    StreamLength(stream);
    FirstLastLetter(stream);


    return 0;
}