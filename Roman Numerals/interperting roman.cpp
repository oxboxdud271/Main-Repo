#include <iostream>
#include <string>
#include <regex>

int main() {
    std::string number;
    std::regex e ("[^I^V^X^L^C^D^M]", std::regex_constants::ECMAScript | std::regex_constants::icase );
    std::cout << "Type a roman numeral --> "; std::cin >> number;
    while(true){
        if (std::regex_search(number, e)) {
            std::cout << "Incorrect Roman Numeral, try again --> "; std::cin >> number;
        } else {
            break;
        }
    }
    return 0;
}