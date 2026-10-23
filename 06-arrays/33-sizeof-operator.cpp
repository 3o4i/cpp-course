#include <iostream>

int main() {
    std::string name = "Tobi";
    double gpa = 2.5;
    char grade = 'F';
    bool isStudent = true;
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy"};

    std::cout << sizeof(students)/sizeof(std::string) << " elements\n";   // Length of the arr

    return 0;
}