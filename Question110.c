#include <stdio.h>

int main() {
    int n, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter window size (k): ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid window size.\n");
        return 0;
    }

    printf("Maximum elements in each window: ");

    // Loop through each window
    for (int i = 0; i <= n - k; i++) {
        int max = arr[i];

        // Find max in current window of size k
        for (int j = 1; j < k; j++) {
            if (arr[i + j] > max) {
                max = arr[i + j];
            }
        }

        printf("%d ", max);
    }

    printf("\n");
    return 0;
}
