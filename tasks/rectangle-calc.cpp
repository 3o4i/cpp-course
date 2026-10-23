#include <iostream>

int main() {

    int length;
    int width;

    std::cout << "What's the length?: ";
    std::cin >> length;

    std::cout << "What's the width?: ";
    std::cin >> width;

    std::cout << "The area is: " << length*width << '\n';
    std::cout << "The perimeter is: " << (length+width)*2;

    return 0;
}