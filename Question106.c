#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Next Greater Elements: ");

    for(int i = 0; i < n; i++) {
        int next = -1;  // default value

        // Check all elements to the right of current element
        for(int j = i + 1; j < n; j++) {
            if(arr[j] > arr[i]) {
                next = arr[j];
                break;  // stop at the first greater element
            }
        }

        // Print with comma separation (except after last element)
        if(i == n - 1)
            printf("%d", next);
        else
            printf("%d,", next);
    }

    printf("\n");
    return 0;
}
