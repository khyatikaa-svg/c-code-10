#include <stdio.h>
#include <math.h>  // for sqrt() function

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);

    // Calculate total sum of numbers from 1 to n
    int totalSum = n * (n + 1) / 2;

    // The pivot x should satisfy x^2 = totalSum / 2
    double x = sqrt(totalSum);

    // Check if x is an integer and satisfies the condition
    if (x == (int)x && (int)x * (int)x == totalSum) {
        printf("Pivot integer: %d\n", (int)x);
    } else {
        printf("-1\n");
    }

    return 0;
}
