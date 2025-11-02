/* Develop a C program to generate the Fibonacci series up to ‘n’ terms, where each term is the 
sum of the two preceding ones. 
0, 1, 1, 2, 3, 5, 8, 13, ... 
*/

#include <stdio.h>

int main() {
    int n, i;
    long long first = 0, second = 1, next;  // long long for large Fibonacci numbers

    // Input number of terms
    printf("Enter the number of terms: ");
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Fibonacci Series up to %d terms:\n", n);

    for (i = 1; i <= n; ++i) {
        printf("%lld", first);

        if (i < n) printf(", ");  // print commas except after the last term

        next = first + second;  // calculate next term
        first = second;         // shift terms
        second = next;
    }

    printf("\n");
    return 0;
}
