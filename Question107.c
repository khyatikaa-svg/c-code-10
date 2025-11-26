#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Previous Greater Elements: ");

    for (int i = 0; i < n; i++) {
        int prev = -1;  // default value if no greater element found

        // Check all elements to the left of current element
        for (int j = i - 1; j >= 0; j--) {
            if (arr[j] > arr[i]) {
                prev = arr[j];
                break;  // stop at the first greater element
            }
        }

        // Print with commas between results
        if (i == n - 1)
            printf("%d", prev);
        else
            printf("%d,", prev);
    }

    printf("\n");
    return 0;
}
