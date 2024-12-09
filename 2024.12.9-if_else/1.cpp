#include <iostream>


int main() {

    bool statement = 3 > 5;

    std::cout << statement << '\n'; // it will print 0 meaning false

    // outputting this flag will make cout print booleans as true or false
    std::cout << std::boolalpha;

    std::cout << statement << '\n'; // it will print "false"

    return 0;
}