// simulate direct mapping, calculate hit/miss ratio and Show locality of reference

#include <stdio.h>
#define CACHE_SIZE 4  // Small cache size to visualize easily
#define MEM_SIZE 16   // Main memory size

int main() {
    int memory[MEM_SIZE];      // Main memory
    int cache[CACHE_SIZE];     // Cache memory
    int cacheIndex;            // Index in cache
    int hits = 0, misses = 0;  // Counters
    int i;

    // Initialize memory
    for (i = 0; i < MEM_SIZE; i++) {
        memory[i] = i * 10; // Example: memory[0] = 0, memory[1] = 10 ...
    }

    // Initialize cache to -1 (empty)
    for (i = 0; i < CACHE_SIZE; i++) {
        cache[i] = -1;
    }

    // Sample memory access pattern demonstrating locality
    int accessPattern[12] = {0, 1, 2, 3, 0, 1, 4, 5, 0, 1, 2, 3};

    printf("Direct Mapped Cache Simulation\n");
    printf("Cache Size: %d, Memory Size: %d\n", CACHE_SIZE, MEM_SIZE);
    printf("\nAccess\tCache Index\tHit/Miss\tCache Content\n");

    for (i = 0; i < 12; i++) {
        int addr = accessPattern[i];
        cacheIndex = addr % CACHE_SIZE; // Direct mapping formula

        if (cache[cacheIndex] == addr) {
            hits++;
            printf("%d\t%d\t\tHit\t\t", addr, cacheIndex);
        } else {
            misses++;
            cache[cacheIndex] = addr; // Load to cache
            printf("%d\t%d\t\tMiss\t\t", addr, cacheIndex);
        }

        // Print cache content
        for (int j = 0; j < CACHE_SIZE; j++) {
            if (cache[j] != -1)
                printf("%d ", cache[j]);
            else
                printf("- ");
        }
        printf("\n");
    }

    printf("\nTotal Accesses: %d\n", hits + misses);
    printf("Cache Hits: %d\n", hits);
    printf("Cache Misses: %d\n", misses);
    printf("Hit Ratio: %.2f%%\n", (hits * 100.0) / (hits + misses));
    printf("Miss Ratio: %.2f%%\n", (misses * 100.0) / (hits + misses));

    return 0;
}
