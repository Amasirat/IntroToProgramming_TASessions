#include <iostream>
// Take a number and print its absolute value
//
// Input: -8 ======> Output: 8
// Input: 0 ========> Output: 0
// Input: 4 =========> Output: 4
int main() {

    int a;
    std::cin >> a;


    if(a >= 0) {
        std::cout << "a is: " << a << '\n';
    }
    else {
        std::cout << "a is: " << -a << '\n';
    }

    // equivalent of above
    int abs_a = a >= 0 ? a : -a;

    return 0;
}