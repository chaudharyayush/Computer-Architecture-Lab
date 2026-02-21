#include <stdio.h>

int main() {
    // Simulate memory and registers
    int memory[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int reg[4] = {0, 0, 0, 0}; // 4 general-purpose registers

    int choice, value, address, reg_num;

    printf("CPU Addressing Modes Simulation\n");
    printf("1. Immediate Addressing\n2. Direct Addressing\n3. Indirect Addressing\n4. Register Addressing\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: // Immediate
            printf("Enter immediate value: ");
            scanf("%d", &value);
            printf("Immediate value accessed: %d\n", value);
            break;

        case 2: // Direct
            printf("Enter memory address (0-9): ");
            scanf("%d", &address);
            printf("Value at memory[%d]: %d\n", address, memory[address]);
            break;

        case 3: // Indirect
            printf("Enter memory address of pointer (0-9): ");
            scanf("%d", &address);
            printf("Value at memory[memory[%d]]: %d\n", address, memory[memory[address] % 10]); // %10 to avoid overflow
            break;

        case 4: // Register
            printf("Enter register number (0-3): ");
            scanf("%d", &reg_num);
            printf("Enter value to store in register: ");
            scanf("%d", &value);
            reg[reg_num] = value;
            printf("Value in reg[%d] = %d\n", reg_num, reg[reg_num]);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
