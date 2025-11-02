#include <stdio.h>
#include <math.h>   // For pow() function

int main() {
    int num, originalNum, remainder, n = 0;
    double result = 0.0;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &num);

    originalNum = num;

    // Step 1: Count number of digits
    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // Step 2: Compute the sum of nth power of each digit
    while (originalNum != 0) {
        remainder = originalNum % 10;                   // extract last digit
        result += pow(remainder, n);                    // raise it to power n
        originalNum /= 10;                              // remove last digit
    }

    // Step 3: Check if sum equals original number
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
