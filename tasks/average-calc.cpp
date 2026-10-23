#include <iostream>

int main() {

    int num1;
    int num2;
    int num3;

    std::cout << "The first number: ";
    std::cin >> num1;

    std::cout << "The second number: ";
    std::cin >> num2;
    
    std::cout << "The third number: ";
    std::cin >> num3;

    double average = ((double)num1 + num2 + num3) / 3;

    std::cout << "The average of the numbers is: " << average;
    
    return 0;
}