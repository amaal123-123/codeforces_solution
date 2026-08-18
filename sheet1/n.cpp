#include <iostream>
 
int main() {
    char X;
 
    if (!(std::cin >> X)) return 0;
 
    if (X >= 'a' && X <= 'z') {
 
        char result = X - 32;
        std::cout << result << std::endl;
    }
 
    else {
 
        char result = X + 32;
        std::cout << result << std::endl;
    }
 
    return 0;
}
