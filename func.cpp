#include "func.h"

void Print(const std::string& stream) {
    std::cout << "Here are five ways to print the string:" << std::endl;

    std::cout << "\tUsing std::cout - \"" << stream << "\"" << std::endl;
    
    std::cout << "\tUsing Range-based for loop - \"";
    for (const auto& ch : stream) {
        std::cout << ch;
    }
    std::cout << "\"" << std::endl;
    
    std::cout << "\tUsing for loop - \"";
    for (int i = 0; i < stream.length(); ++i) {
        std::cout << stream[i];
    }
    std::cout << "\"" << std::endl;

    std::cout << "\tUsing for loop with iterators - \"";
    for (auto it = stream.begin(); it != stream.end(); ++it) {
        std::cout << *it;
    }
    std::cout << "\"" << std::endl;

    std::cout << "\tUsing algorithm, for example, for_each() - \"";
    std::for_each(stream.begin(), stream.end(), [] (const char& ch) {
        std::cout << ch;
    });
    std::cout << "\"\n\n\n"; 
}

void StreamLength(const std::string& stream) {
    std::cout << "Here are four ways to show the length:" << std::endl;

    std::cout << "\tUsing length method - \"" 
                << stream.length() << "\"" << std::endl;
    std::cout << "\tUsing size method - \"" 
                << stream.size() << "\"" << std::endl;
    std::cout << "\tUsing iterators - \"" 
                << stream.end() - stream.begin() << "\"" << std::endl;
   
    std::cout << "\tUsing Range-based for loop - \"";
    size_t cnt = 0;
    for (const auto& ch : stream) {
        ++cnt;
    }
    std::cout << cnt << "\"\n\n\n"; 
}

void FirstLastLetter(const std::string& stream) {
    std::cout << "Here are two ways to show the length:" << std::endl;

    std::cout << "\tUsing indeces - \"" 
                << stream[0] << "-" << stream[stream.length() - 1] 
                << "\"" << std::endl;
    std::cout << "\tUsing iterators - \"" 
                << *(stream.begin()) << "-" << *(stream.end() - 1) 
                << "\"" << std::endl;
}