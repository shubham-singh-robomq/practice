#include <iostream>
#include <cstdint>  // for uint8_t
#include <cstring>  // for memset

const int POOL_SIZE = 1024; // 1 KB heap
uint8_t memory_pool[POOL_SIZE]; // Simulated heap

int main() {
    // Clear the pool
    std::memset(memory_pool, 0, POOL_SIZE);

    // Example: Store an integer at the beginning of the pool
    int* myInt = reinterpret_cast<int*>(memory_pool);
    *myInt = 42;

    std::cout << "Stored value: " << *myInt << std::endl;
    std::cout << "Raw bytes: ";
    for (int i = 0; i < sizeof(int); ++i) {
        std::cout << std::hex << static_cast<int>(memory_pool[i]) << " ";
    }
    std::cout << std::endl;

    return 0;
}

