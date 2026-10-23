#include <iostream>

void printArray(int nums[], int size);

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    int size = sizeof(nums) / sizeof(nums[0]);

    printArray(nums, size);

    return 0;
}

void printArray(int nums[], int size) {
    for(int i = 0; i < size; i++) {
        std::cout << nums[i];
    }
}