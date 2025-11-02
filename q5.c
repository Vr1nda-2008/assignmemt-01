/*Develop a C program to determine the quadrant in which a given coordinate point (x, y) lies on 
the XY plane, illustrating the use of conditional statements and coordinate geometry logic relevant in 
game development and robotics navigation.*/

#include <stdio.h>

int main() {
    float x, y;

    // Input coordinates
    printf("Enter the coordinates (x y): ");
    scanf("%f %f", &x, &y);

    // Conditional logic to determine position
    if (x > 0 && y > 0)
        printf("The point (%.2f, %.2f) lies in the First Quadrant.\n", x, y);
    else if (x < 0 && y > 0)
        printf("The point (%.2f, %.2f) lies in the Second Quadrant.\n", x, y);
    else if (x < 0 && y < 0)
        printf("The point (%.2f, %.2f) lies in the Third Quadrant.\n", x, y);
    else if (x > 0 && y < 0)
        printf("The point (%.2f, %.2f) lies in the Fourth Quadrant.\n", x, y);
    else if (x == 0 && y == 0)
        printf("The point (%.2f, %.2f) lies at the Origin.\n", x, y);
    else if (x == 0)
        printf("The point (%.2f, %.2f) lies on the Y-axis.\n", x, y);
    else if (y == 0)
        printf("The point (%.2f, %.2f) lies on the X-axis.\n", x, y);
    else
        printf("Invalid input.\n");

    return 0;
}
