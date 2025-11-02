/*Design a C program to subtract two integers without using the minus (-) operator, applying 
bitwise operators. Highlight how such logic can be used in low-level arithmetic operations in 
embedded systems or processors*/

#include <stdio.h>

// Function to subtract two integers using bitwise operations
int subtract(int a, int b) {
    // Use bitwise logic until no borrow is left
    while (b != 0) {
        // Borrow is common set bits of (~a) and b
        unsigned borrow = (~a) & b;

        // Perform subtraction of bits where at least one of the bits is not set
        a = a ^ b;

        // Borrow is shifted by one to subtract from the next higher bit
        b = borrow << 1;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = subtract(num1, num2);

    printf("\nSubtraction (without using '-'):\n");
    printf("%d - %d = %d\n", num1, num2, result);

    return 0;
}
