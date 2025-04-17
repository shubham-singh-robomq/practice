#include <iostream>

int main() {
    // Allocate memory for 5 integers on the heap
    int* numbers = new int[5];

    // Assign values
    for (int i = 0; i < 5; ++i) {
        numbers[i] = i * 10;
    }

    // Print values
    for (int i = 0; i < 5; ++i) {
        std::cout << "numbers[" << i << "] = " << numbers[i] << std::endl;
    }

    // Don't forget to free the memory!
    delete[] numbers;

    return 0;
}

