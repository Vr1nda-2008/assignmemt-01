/* Construct a C program to find the HCF (Highest Common Factor) of two integers using 
iterative or recursive logic — a core operation in optimisation algorithms and cryptographic 
computations. */

#include <stdio.h>

// Recursive function to find HCF using Euclid’s algorithm
int findHCF_recursive(int a, int b) {
    if (b == 0)
        return a;
    else
        return findHCF_recursive(b, a % b);
}

// Iterative method to find HCF
int findHCF_iterative(int a, int b) {
    int temp;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    // Using recursive method
    int hcf_rec = findHCF_recursive(num1, num2);
    printf("\nHCF (using recursion) of %d and %d = %d\n", num1, num2, hcf_rec);

    // Using iterative method
    int hcf_itr = findHCF_iterative(num1, num2);
    printf("HCF (using iteration) of %d and %d = %d\n", num1, num2, hcf_itr);

    return 0;
}
