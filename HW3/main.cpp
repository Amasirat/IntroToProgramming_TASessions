#include <iostream>

namespace Problem1 {
    void circle_calculations() {
        const double P = 3.14;
        std::cout << "Enter Circle's radius: ";\

        double radius;
        std::cin >> radius;

        double area = P * radius * radius;
        double perimeter = 2 * P * radius;

        std::cout << "Area: " << area << '\n';
        std::cout << "Perimeter: " << perimeter << '\n';
    }

    void rectangle_calculations() {
        double width;
        double height;
        std::cout << "Enter width and height of the square: ";
        std::cin >> width >> height;

        double area = width * height;
        double perimeter = 2 * (width * height);

        std::cout << "Area is: " << area << '\n';
        std::cout << "perimeter is: " << perimeter << '\n';
    }

    void swap_three_variables() {
        std::cout << "Enter x, y, and z: ";
        int x;
        int y;
        int z;
        std::cin >> x >> y >> z;

        int temp = z;
        z = y;
        y = x;
        x = temp;

        std::cout << "x is: " << x << '\n';
        std::cout << "y is: " << x << '\n';
        std::cout << "z is: " << x << '\n';
    }

    void swap() {
        std::cout << "Enter x and y: ";
        int x;
        int y;
        std::cin >> x >> y;

        x = x + y;
        y = x - y;
        x = x - y;

        std::cout << "x is: " << x << '\n';
        std::cout << "y is: " << y << '\n';
    }

    void celsius_to_fahrenheit() {
        std::cout << "Enter degree in Centigrade: ";
        double centigrade;
        std::cin >> centigrade;


        std::cout << "Your degree in fahrenheit: " << (1.8*centigrade) + 32 << '\n';
    }
}

namespace Problem2 {
    void multiply() {
        std::cout << "Enter two numbers: ";
        int num1;
        int num2;

        std::cin >> num1 >> num2;

        std::cout << "Here they are multiplied: " << num1 * num2 << '\n';
    }
}

namespace Extra {
    void character_to_ascii() {
        std::cout << "Enter a character: ";
        char x;
        std::cin >> x;

        std::cout << "Its ascii code is this: " << static_cast<int>(x) << '\n';
    }
}

int main() {

    return 0;
}

