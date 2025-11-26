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

    printf("Enter size of subarray (k): ");
    scanf("%d", &k);

    if (k > n || k <= 0) {
        printf("Invalid subarray size.\n");
        return 0;
    }

    int currentSum = 0;

    // Calculate sum of first window of size k
    for (int i = 0; i < k; i++) {
        currentSum += arr[i];
    }

    int maxSum = currentSum;

    // Slide the window and update sums
    for (int i = k; i < n; i++) {
        currentSum += arr[i] - arr[i - k]; // Slide window
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("Maximum sum of subarray of size %d = %d\n", k, maxSum);

    return 0;
}
