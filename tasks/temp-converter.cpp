#include <iostream>

int main() {

    double temp_celsius;

    std::cout << "What's the temperature in Celsius ?: ";
    std::cin >> temp_celsius;

    double temp_fahrenheit = (temp_celsius * ((double)9 / 5)) + 32;

    std::cout << "The termperature in Fahrenheit is: " << temp_fahrenheit;

    return 0;
}