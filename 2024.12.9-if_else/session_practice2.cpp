#include <iostream>

int main() {

    int a;
    std::cout << "Enter a number: ";
    std::cin >> a;

    if (a > 0) {
        std::cout << "a is positive\n";
    } 
    else if (a < 0) {
        std::cout << "a is negative\n";
    }
    else {
        std::cout << "a is 0\n";
    }

    return 0;
}