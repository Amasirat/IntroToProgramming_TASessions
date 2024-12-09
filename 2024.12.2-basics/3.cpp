#include <iostream>


int main()
{
    
    std::cout << 5 + 9 << '\n'; // result: 14

    int x = 6;
    int y = 1;

    std::cout << x - y << '\n'; // result: 5

    std::cout << x * y++ << '\n'; // result: 6

    std::cout << "y is: " << y << '\n'; // result: y is 2

    std::cout << x * ++y << '\n'; // result: 18

    std::cout << "y is: " << y << '\n'; // result: y is 3

    return 0;
}