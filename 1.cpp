// This is called a preprocessor directive
// Currently it copy and pastes the contents of iostream inside the code
#include <iostream>


// Every C++ program needs to have a main function like this:
// This is called the program's main entry point.
// It then executes every statement line by line.
int main()
{
    // Variables are declared like this:
    int x;

    // You can either assign it sometime after it is declared 
    // or assign it in the same place as you are declaring it.
    x = 6;

    // or

    int y = 6;

    std::cout << "x is: " << x << std::endl;
    std::cout << "y is: " << y << '\n';
    // \n and std::endl basically do the same thing. 
    // There are only low-level differences

    return 0; // It's convention for saying program ran successfuly. 
}