#include <iostream>
#include <fstream>

int main() {
    int dummy;
    std::fstream fs ("test.txt", std::fstream::out);
    fs << "HELLO!";
    fs.close();

    if(fs.is_open()) {
        std::cout << "FILE IS STILL OPEN"; std::cin >> dummy;
    }

    
    return 0;
}