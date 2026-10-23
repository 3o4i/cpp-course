#include <iostream>

int myNum = 3;

void printNum();

int main() {
    int myNum = 2;
    std::cout << ::myNum << '\n';
    printNum();
    return 0;
}

void printNum() {
    int myNum = 1;
    std::cout << ::myNum << '\n';
}