#include <stdio.h>

int main() {
    int n, target;

    // Input size of array
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int nums[n];

    // Input sorted array
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    // Input target element
    printf("Enter target element: ");
    scanf("%d", &target);

    int first = -1, last = -1;

    // Find first and last occurrence
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1)
                first = i;
            last = i;
        }
    }

    // Output result
    if (first == -1)
        printf("First occurrence: -1, Last occurrence: -1\n");
    else {
        printf("First occurrence: %d (Index: %d)\n", nums[first], first);
        printf("Last occurrence: %d (Index: %d)\n", nums[last], last);
    }

    return 0;
}
