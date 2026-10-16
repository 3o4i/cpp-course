#include <iostream>

int main() {

    int number; // The initial value is 0


    do{
        std::cout << "Enter a positive #: ";
        std::cin >> number; 
    } while (number < 0);
    
    std::cout << "The # is: " << number;
    
    return 0;
}