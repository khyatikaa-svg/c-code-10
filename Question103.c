#include <stdio.h>   // Header file for input/output functions

int main() {
    int num1, num2, sum;  // Declare variables

    // Ask the user for input
    printf("Enter first number: ");
    scanf("%d", &num1);  // Read first number

    printf("Enter second number: ");
    scanf("%d", &num2);  // Read second number

    // Perform addition
    sum = num1 + num2;

    // Display result
    printf("The sum of %d and %d is %d\n", num1, num2, sum);

    return 0;  // End of program
}
