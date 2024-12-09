#include <iostream>


int main() {

    int a = 6;
    int b = 14;

    if(a > b) {
        std::cout << "a is greater than b\n"; // this will not print and the code inside else starts executing
    }
    else {
        std::cout << "a is not greater than b\n"; // this will be executed.
    }

    a = 18;

    if(a > b) {
        std::cout << "a is greater than b\n"; // this will execute
    }
    else {
        std::cout << "a is not greater than b\n"; // this will be not be executed.
    }
    
    return 0;
}