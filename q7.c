/* Develop a C program to print a binary pyramid pattern. 
0             0 
01           01 
010       010  
0101    0101  
0101001010*/

#include <stdio.h>

int main() {
    int n = 5; // number of rows
    int i, j, space;

    for (i = 1; i <= n; i++) {
        // Left binary sequence
        for (j = 1; j <= i; j++) {
            printf("%d", j % 2);   // Alternates 0 and 1
        }

        // Spaces in the middle
        space = (n - i) * 4 - 2;   // Controls spacing pattern
        if (space < 0)
            space = 0;
        for (j = 1; j <= space; j++) {
            printf(" ");
        }

        // Right binary sequence
        for (j = 1; j <= i; j++) {
            printf("%d", j % 2);
        }

        printf("\n");
    }

    return 0;
}
