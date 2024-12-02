#include <iostream>
// Get two numbers from user and store them in variables. 
// Afterwards swap their values with each other.

/*
Input:
    x = 5;
    y = 6;

Output:
    x = 6;
    y = 5;
*/

int main()
{
    int x;
    int y;
// Read x and y's values from user
    std::cin >> x >> y;

    // declare and store x's value into temp.
    int temp = x;
    x = y;
    y = temp;

    // Write the results
    std::cout << "x is: " << x << '\t';
    std::cout << "y is: " << y << '\n';

    return 0;
}