/* Implement a C program to swap two numbers using four different methods, demonstrating 
diverse approaches such as arithmetic, bitwise XOR, pointer manipulation, and temporary variable 
usage — a key skill in memory and variable management.*/

#include <stdio.h>

// Function to swap using a temporary variable
void swap_temp(int a, int b) {
    int temp;
    printf("\n[1] Using Temporary Variable:\n");
    printf("Before Swap: a = %d, b = %d\n", a, b);

    temp = a;
    a = b;
    b = temp;

    printf("After  Swap: a = %d, b = %d\n", a, b);
}

// Function to swap using arithmetic operations
void swap_arithmetic(int a, int b) {
    printf("\n[2] Using Arithmetic Operations (+, -):\n");
    printf("Before Swap: a = %d, b = %d\n", a, b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("After  Swap: a = %d, b = %d\n", a, b);
}

// Function to swap using bitwise XOR
void swap_xor(int a, int b) {
    printf("\n[3] Using Bitwise XOR:\n");
    printf("Before Swap: a = %d, b = %d\n", a, b);

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("After  Swap: a = %d, b = %d\n", a, b);
}

// Function to swap using pointers
void swap_pointer(int *a, int *b) {
    printf("\n[4] Using Pointers:\n");
    printf("Before Swap: a = %d, b = %d\n", *a, *b);

    int temp = *a;
    *a = *b;
    *b = temp;

    printf("After  Swap: a = %d, b = %d\n", *a, *b);
}

int main() {
    int x, y;

    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    swap_temp(x, y);
    swap_arithmetic(x, y);
    swap_xor(x, y);
    swap_pointer(&x, &y);  // pointer method modifies actual values

    return 0;
}
