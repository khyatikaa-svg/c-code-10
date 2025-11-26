#include <stdio.h>

int main() {
    int n, x;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter value of x: ");
    scanf("%d", &x);

    int low = 0, high = n - 1;
    int ceilIndex = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= x) {
            ceilIndex = mid;  // possible ceil found
            high = mid - 1;   // look for smaller index (first occurrence)
        } else {
            low = mid + 1;    // move right
        }
    }

    printf("Index of ceil: %d\n", ceilIndex);

    return 0;
}
